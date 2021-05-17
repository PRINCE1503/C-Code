// Null Pointer
#include <stdio.h>
int main()
{
    int a = 49;
    int *ptr = &a;
    printf("The adress of a is %d\n", ptr);
    printf("The value of a is %d\n", *ptr);
    int *ptr2 = NULL;
    if (ptr2 != NULL)
    {
        printf("The adress store in ptr pointer is %d\n", ptr2);
        printf("The value store in ptr pointer is %d\n", *ptr2);
    }
    else
    {
        printf("The pointer is a NULL pointer , So it can't be derefference!\n");
    }

    return 0;
}
