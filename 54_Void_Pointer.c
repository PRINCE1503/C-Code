// Void Pointer
#include <stdio.h>
int main()
{
    int a = 62;
    float b = 13.49;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %.2f\n", *((float *)ptr));
    return 0;
}
