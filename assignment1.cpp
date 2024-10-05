#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

void decimalToOctal(int n) {
    int octal[32];
    int i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

void decimalToHexadecimal(int n) {
    char hex[32];
    int i = 0;
    while (n != 0) {
        int temp = n % 16;
        if (temp < 10)
            hex[i] = temp + 48;
        else
            hex[i] = temp + 55;
        n = n / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    decimalToOctal(n);
    decimalToHexadecimal(n);
    return 0;
}
