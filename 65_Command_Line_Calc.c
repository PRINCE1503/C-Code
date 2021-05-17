// Command Line Calc(For 2 numbers)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char *opr;
    int a, b;
    opr = argv[1];
    a = atoi(argv[2]);
    b = atoi(argv[3]);
    if (strcmp(opr, "add") == 0)
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (strcmp(opr, "subtract") == 0)
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (strcmp(opr, "multiply") == 0)
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (strcmp(opr, "devide") == 0)
    {
        printf("%d / %d = %.2f\n", a, b, (float)a / b);
    }

    return 0;
}
