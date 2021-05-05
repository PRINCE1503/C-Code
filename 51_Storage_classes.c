// Storage classes
#include <stdio.h>
#include "temp.c"
int func1(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    register int mult = func1(a, b);
    printf("%d\n", mult);
    printf("%d\n", mult);
    printf("%d\n", mult);
    printf("%d\n", mult);
    printf("The value of sum in file temp.c is %d", sum);
    return 0;
}