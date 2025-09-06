#include <stdio.h>
#include <string.h>

char *slice(char string[], int n, int m);

int main()
{
    char str[] = "SudipMahata";
    printf("%s", slice(str, 2, 5));
    return 0;
}

char *slice(char string[], int n, int m)
{
    static char slicedString[100];
    int index = 0;
    for(int i = n; i <= m; i++){
        // strcat(slicedString, string[i]);
        slicedString[index++] = string[i];
    }

    return slicedString;
}