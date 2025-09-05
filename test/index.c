#include <stdio.h>

// function declaration
void noReturn();
int number = 3;
int sum(int n);
int factorial(int n);
int printFibonacci(int n);

int main()
{
    // int x = noReturn();
    // printf("%d\n", number);
    // noReturn();
    // printf("%d", sum(5));
    // printf("%d", factorial(5));
    printFibonacci(7);
    return 0;
}

int printFibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    int fibN = printFibonacci(n - 1) + printFibonacci(n - 2);

    printf("fib of %d is : %d\n", n, fibN);
    return fibN;
}

void noReturn()
{
    printf("%d\n", number);
    printf("Hi");
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n - 1) + n;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return factorial(n - 1) * n;
}
