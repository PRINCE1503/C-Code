// Static Variables
#include <stdio.h>
int func()
{
    static int a1; // defualt value of static variable is 0
    printf("The value of a1 is %d\n", a1);
    return a1++;
}
int main()
{
    int val = func();
    val = func();
    val = func();
    val = func();
    int *ptr = &val;
    return 0;
}
