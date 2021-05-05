// Fibonicci series (With ricursive & iterative approach)
#include <stdio.h>
int fib_ricursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_ricursive(n - 1) + fib_ricursive(n - 2);
    }
}
int fib_iterative(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;

    return 0;
}
int main()
{
    int num;
    printf("Enter the Number to get Fibonicci series\n");
    scanf("%d", &num);
    printf("The value of Fibonicci Number at position No. %d using iterative approach is %d\n", num, fib_iterative(num));
    printf("The value of Fibonicci Number at position No. %d using ricursive approach is %d\n", num, fib_ricursive(num));
    return 0;
}
