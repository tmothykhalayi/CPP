#include <stdio.h>

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
