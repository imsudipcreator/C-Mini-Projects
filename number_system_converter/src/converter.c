#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "converter.h"


void toDecimal(char *num, int base)
{
    long int decimal = strtol(num, NULL, base);
    printf("Decimal: %ld", decimal);
}

void toHex(char *num, int base)
{
    unsigned int hex = strtol(num, NULL, base);
    printf("Hexadecimal: %X", hex);
}

void toOct(char *num, int base)
{
    unsigned int octal = strtol(num, NULL, base);
    printf("Octal: %o", octal);
}

void toBinary(char *num, int base)
{
    long int decimal = strtol(num, NULL, base);
    decimalToBinary(decimal);
}

void decimalToBinary(int decimal)
{
    int i = 0, binary[65];
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}