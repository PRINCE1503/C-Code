// Basic Pointer Arithmetic
#include <stdio.h>
int main()
{
    int a = 49;
    int *ptra = &a;
    printf("The value of ptra is %d\n", ptra);
    printf("The value of ptra+1 is %d\n", ptra + 1); // add 1 int size = 4 bytes
    printf("The value of ptra-2 is %d \n", ptra - 2);
    ptra++;
    printf("The value of ptra++ is %d\n", ptra);
    ptra--;
    printf("The value of ptra-- is %d\n", ptra);
    return 0;
}