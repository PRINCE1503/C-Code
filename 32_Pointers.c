// Pointers
#include <stdio.h>
int main()
{
    int a = 49;
    // printf("Enter the value of a : ");
    // scanf("%d",a);
    int *ptra = &a;
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    printf("The value of a is %x\n", ptra); // %x is use to print hexa - decimal
    printf("The adress of a is %p\n", *ptra);
    printf("The adress of a is %p\n", a);
    printf("The adress of pointer to a is %p\n\n\n", &ptra);
    // NULL Pointer
    int *ptr2;
    printf("The adress of ptr2 is %p\n", ptr2);
    int *ptr3 = NULL;
    printf("The adress of ptr3 is %p\n", ptr3);
    return 0;
}
