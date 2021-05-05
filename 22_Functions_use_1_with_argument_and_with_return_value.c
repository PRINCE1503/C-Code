// Functions use - 1 (with argument & with return value)
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 78;
    b = 22;
    c = sum(a, b);
    printf("a + b = %d", c);
    return 0;
}