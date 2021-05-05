// Typedef
#include <stdio.h>
int main()
{
    typedef int integer;
    integer a, b, c;
    a = 15, b = 3, c = 2006;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);
    typedef int *intptr;
    intptr A, B;
    int C = 34, D = 45;
    A = &C, B = &D;
    printf("\n\nThe adress of A is %p\n", A);
    printf("The adress of B is %p\n", B);
    return 0;
}
