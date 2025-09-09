#include <stdio.h>
#include <math.h>

void menu(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
void modulus(void);
void power(void);

int main()
{
    int choice;
    while (1)
    {
        menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            add();
            subtract();
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            modulus();
            break;
        case 6:
            power();
            break;
        case 7:
            return 0;
        default:
            break;
        }
    }
}

void menu()
{
    printf("\n---------------------\n");
    printf("Welcome to simple calculator\n");
    printf("\nChoose one of the following options:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");
    printf("Now, enter your choice: ");
}

void add()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nResult of operation is: %d", a + b);
}

void subtract()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nResult of operation is: %d", a - b);
}

void multiply()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nResult of operation is: %d", a * b);
}

void divide()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nResult of operation is: %d", a / b);
}

void modulus()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nResult of operation is: %d", a % b);
}

void power()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nResult of operation is: %f", pow((double)a, (double)b));
}