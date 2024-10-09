#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

void decimalToOctal(int decimal) {
    int octal[32];
    int i = 0;
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

void decimalToHexadecimal(int decimal) {
    char hex[32];
    int i = 0;
    while (decimal != 0) {
        int temp = decimal % 16;
        if (temp < 10)
            hex[i] = temp + 48;
        else
            hex[i] = temp + 55;
        decimal = decimal / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, rem;
    while (binary != 0) {
        rem = binary % 10;
        binary /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }
    return decimal;
}

int hexadecimalToDecimal(char hex[]) {
    int len = strlen(hex);
    int base = 1;
    int decimal = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * base;
            base = base * 16;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * base;
            base = base * 16;
        }
    }
    return decimal;
}

int main() {
    int choice, decimal;
    long long binary;
    int octal;
    char hex[32];

    printf("Number System Conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Octal to Decimal\n");
    printf("6. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Decimal Number: ");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;
        case 2:
            printf("Enter Decimal Number: ");
            scanf("%d", &decimal);
            decimalToOctal(decimal);
            break;
        case 3:
            printf("Enter Decimal Number: ");
            scanf("%d", &decimal);
            decimalToHexadecimal(decimal);
            break;
        case 4:
            printf("Enter Binary Number: ");
            scanf("%lld", &binary);
            printf("Decimal: %d\n", binaryToDecimal(binary));
            break;
        case 5:
            printf("Enter Octal Number: ");
            scanf("%d", &octal);
            printf("Decimal: %d\n", octalToDecimal(octal));
            break;
        case 6:
            printf("Enter Hexadecimal Number: ");
            scanf("%s", hex);
            printf("Decimal: %d\n", hexadecimalToDecimal(hex));
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
