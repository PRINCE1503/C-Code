// Dynamic Mamory Allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //  use of malloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to creat: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i + 1, ptr[i]);
    }
    //  use of calloc
    int *ptr2;
    int n2;
    printf("Enter the size of array you want to creat: ");
    scanf("%d", &n2);
    ptr2 = (int *)calloc(n2, sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value at %d of this array : ", i + 1);
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("The value at %d of this array is %d\n", i + 1, ptr2[i]);
    }
    // use eof realloc
    printf("Enter the new size of array you want to creat: ");
    scanf("%d", &n2);
    ptr2 = (int *)realloc(ptr2, sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the new value at %d of this array : ", i + 1);
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("The new value at %d of this array is %d\n", i + 1, ptr2[i]);
    }
    free(ptr);
    free(ptr2);
    return 0;
}