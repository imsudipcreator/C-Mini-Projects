#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define RESET  "\x1b[0m"
#define RED    "\x1b[31m"
#define GREEN  "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAG    "\x1b[35m"
#define CYAN   "\x1b[36m"
#define BOLD   "\x1b[1m"

void printHelp();
void toDecimal(char *num, int base);
void toBinary(char *num, int base);
void toHex(char *num, int base);
void toOct(char *num, int base);
void decimalToBinary(int decimal);

int main(int argc, char *argv[])
{
    if(strcmp(argv[1], "--help") == 0){
        printHelp();
        return 0;
    }

    if(strcmp(argv[1], "--version") == 0){
        printf("Version 1.0.0");
        return 0;
    }

    if(argc < 3){
        printf("Try running with --help flag for help.\n");
        return 1;
    }
    
    int base = atoi(argv[4]) ? atoi(argv[4]) : 10;
    
    
    
    if(strcmp(argv[1], "--bin") == 0){
        // printf("Can't convert rn!\n");
        toBinary(argv[2], base);
    }else if(strcmp(argv[1], "--dec") == 0){
        toDecimal(argv[2], base);
    }else if(strcmp(argv[1], "--oct") == 0){
        toOct(argv[2], base);
    }else if(strcmp(argv[1], "--hex") == 0){
        toHex(argv[2], base);
    }else{
        printf("Unknown option: %s\n", argv[1]);
        printf("Try running with --help flag for help.\n");
    }

    return 0;
}


void printHelp(){
    printf(BLUE "\nNumber System Converter v1.0.0\n" RESET);
    printf("Usage:\n");
    printf("\tconverter.exe --<bin/dec/oct/hex> <number> (defaults to base 10)\n");
    printf("\tconverter.exe --<bin/dec/oct/hex> --base <number>\n");
    printf("Examples:\n");
    printf("\tconverter.exe --bin 12\n");
    printf("\tconverter.exe --dec 11011 --base 2\n");

    printf("\nMade with love by Imago llc\n");
    printf("\n");
}

void toDecimal(char *num, int base){
    long int decimal = strtol(num, NULL, base);
    printf("Decimal: %ld", decimal);
}

void toHex(char *num, int base){
    unsigned int hex = strtol(num, NULL, base);
    printf("Hexadecimal: %X", hex);
}

void toOct(char *num, int base){
    unsigned int octal = strtol(num, NULL, base);
    printf("Octal: %o", octal);
}

void toBinary(char *num, int base)
{
    long int decimal = strtol(num, NULL, base);
    decimalToBinary(decimal);
}

void decimalToBinary(int decimal){
    int i = 0, binary[65];
    while(decimal > 0){
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }
}