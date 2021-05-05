// Functions use - 3 (without argument & with return value)
#include <stdio.h>
int num()
{
    int i;
    printf("Enter a Number: ");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a;
    a = num();
    printf("You have entered a Number %d", a);
}