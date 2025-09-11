#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "help.h"
#include "converter.h"

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
    {
        printHelp();
        return 0;
    }

    if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0)
    {
        printVersion();
        return 0;
    }

    if (argc < 3)
    {
        printf("Try running with -h,--help flag for help.\n");
        return 1;
    }

    int base = 10;
    if (argc > 4 && strcmp(argv[3], "--base") == 0)
    {
        base = atoi(argv[4]);
    }
    // printf("base: %d", base);

    if (strcmp(argv[1], "--bin") == 0)
    {
        // printf("Can't convert rn!\n");
        toBinary(argv[2], base);
    }
    else if (strcmp(argv[1], "--dec") == 0)
    {
        toDecimal(argv[2], base);
    }
    else if (strcmp(argv[1], "--oct") == 0)
    {
        toOct(argv[2], base);
    }
    else if (strcmp(argv[1], "--hex") == 0)
    {
        toHex(argv[2], base);
    }
    else
    {
        printf("Unknown option: %s\n", argv[1]);
        printf("Try running with -h,--help flag for help.\n");
    }

    return 0;
}