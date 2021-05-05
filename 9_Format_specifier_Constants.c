// Format specifier Constants
#include <stdio.h>
int main()
{
    int a = 8;
    float b = 7.333;
    printf("The value of a is %d & The value of b is %f\n", a, b);
    printf("The value of a is %d & The value of b is %7.3f\n", a, b);
    printf("%5.4f\n", b);
    printf("%10.4f\n", b);
    printf("%-21.4f __________________\n", b);
    return 0;
}
