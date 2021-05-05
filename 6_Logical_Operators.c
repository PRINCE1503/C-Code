//Logical Operators
#include <stdio.h>
int main()
{
    int a, b;
    a = 3;
    b = 3;
    printf("a && b = %d\n", a && b);
    int c, d;
    c = 0;
    d = 6;
    printf("c && d = %d\n", c && d);
    printf("c || d = %d\n", c || d);
    int e, f;
    e = 99;
    f = 7;
    printf("e && f = %d\n", e && f);
    int g, h;
    g = 0;
    h = 0;
    printf("g || h = %d\n", g || h);
    return 0;
}
