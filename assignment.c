#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    printf("Octal: %o\n", decimal);
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    printf("Hexadecimal: %X\n", decimal);
}

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

// Function to convert octal to decimal
int octalToDecimal(int octal) {
    int decimal = 0, base = 1, remainder;
    while (octal > 0) {
        remainder = octal % 10;
        decimal = decimal + remainder * base;
        octal /= 10;
        base *= 8;
    }
    return decimal;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char hex[]) {
    int decimal;
    sscanf(hex, "%x", &decimal);
    return decimal;
}

int main() {
    int choice, number;
    char hex[20];

    printf("Select Conversion:\n");
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
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            decimalToBinary(number);
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            decimalToOctal(number);
            break;
        case 3:
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            decimalToHexadecimal(number);
            break;
        case 4:
            printf("Enter a binary number: ");
            scanf("%d", &number);
            printf("Decimal: %d\n", binaryToDecimal(number));
            break;
        case 5:
            printf("Enter an octal number: ");
            scanf("%d", &number);
            printf("Decimal: %d\n", octalToDecimal(number));
            break;
        case 6:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            printf("Decimal: %d\n", hexadecimalToDecimal(hex));
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
