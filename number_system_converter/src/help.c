#include<stdio.h>
#include "help.h"


void printHelp()
{
    printf("Number System Converter v1.0.1\n");
    printf("Usage:\n");
    printf("  converter.exe --<bin|dec|oct|hex> <number> (defaults to base 10)\n");
    printf("  converter.exe --<bin|dec|oct|hex> <number> --base <number>\n");

    printf("Examples:\n");
    printf("  converter.exe --bin 12\n");
    printf("  converter.exe --dec 11011 --base 2\n");

    printf("Options:\n");
    printf("  -h, --help              Show this help message\n");
    printf("  -v, --version           Show version information\n");
    printf("  --base <number>         Specify base of input (default: 10)\n");
    printf("  --bin <number>          Interpret input as binary\n");
    printf("  --dec <number>          Interpret input as decimal\n");
    printf("  --oct <number>          Interpret input as octal\n");
    printf("  --hex <number>          Interpret input as hexadecimal\n");

    printf("\nMade with love by Imago llc\n");
    printf("\n");
}

void printVersion() {
    printf("Number System Converter v1.0.1\n");
}