// Call by Reference
#include <stdio.h>
void interchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void changevalue(int *x)
{
    *x = 62;
}
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("The value of a is %d & The value of b is %d\n", a, b);
    interchange(&a, &b);
    printf("Now the value of a is %d & The value of b is %d\n\n", a, b);
    int c;
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("The value of c is %d\n", c);
    changevalue(&c);
    printf("Now the value of c is %d\n", c);
    return 0;
}