#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <sstream>  

using namespace std;

// Function to convert Decimal to Binary
void decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary += to_string(decimal % 2);
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    cout << "Binary: " << binary << endl;
}

// Function to convert Decimal to Octal
void decimalToOctal(int decimal) {
    string octal = "";
    while (decimal > 0) {
        octal += to_string(decimal % 8);
        decimal /= 8;
    }
    reverse(octal.begin(), octal.end());
    cout << "Octal: " << octal << endl;
}

// Function to convert Decimal to Hexadecimal
void decimalToHexadecimal(int decimal) {
    string hex = "";
    char hexChars[] = "0123456789ABCDEF";
    while (decimal > 0) {
        hex += hexChars[decimal % 16];
        decimal /= 16;
    }
    reverse(hex.begin(), hex.end());
    cout << "Hexadecimal: " << hex << endl;
}

// Function to convert Binary to Decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

// Function to convert Octal to Decimal
int octalToDecimal(int octal) {
    int decimal = 0, base = 1;
    while (octal > 0) {
        int lastDigit = octal % 10;
        decimal += lastDigit * base;
        base *= 8;
        octal /= 10;
    }
    return decimal;
}

// Function to convert Hexadecimal to Decimal
int hexadecimalToDecimal(string hex) {
    int decimal = 0, base = 1;
    int len = hex.size();
    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * base;
        }
        base *= 16;
    }
    return decimal;
}

int main() {
    int choice, decimal;
    long long binary;
    int octal;
    string hex;

    cout << "Number System Conversion:\n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Decimal to Octal\n";
    cout << "3. Decimal to Hexadecimal\n";
    cout << "4. Binary to Decimal\n";
    cout << "5. Octal to Decimal\n";
    cout << "6. Hexadecimal to Decimal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Decimal Number: ";
            cin >> decimal;
            decimalToBinary(decimal);
            break;
        case 2:
            cout << "Enter Decimal Number: ";
            cin >> decimal;
            decimalToOctal(decimal);
            break;
        case 3:
            cout << "Enter Decimal Number: ";
            cin >> decimal;
            decimalToHexadecimal(decimal);
            break;
        case 4:
            cout << "Enter Binary Number: ";
            cin >> binary;
            cout << "Decimal: " << binaryToDecimal(binary) << endl;
            break;
        case 5:
            cout << "Enter Octal Number: ";
            cin >> octal;
            cout << "Decimal: " << octalToDecimal(octal) << endl;
            break;
        case 6:
            cout << "Enter Hexadecimal Number: ";
            cin >> hex;
            cout << "Decimal: " << hexadecimalToDecimal(hex) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
