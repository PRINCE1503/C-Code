// Relation Between Arrays & Pointer
#include <stdio.h>
int main()
{
    int arr[] = {15, 3, 2006, 30, 9, 2004};
    printf("The adress of first Element of the array is %d\n", &arr[0]);
    printf("The adress of first Element of the array is %d\n", arr);
    printf("The adress of fourth Element of the array is %d\n", &arr[3]);
    printf("The adress of fourth Element of the array is %d\n", arr + 3);
    printf("------------------------------------------------------------------------\n");
    printf("The Value at adress of first Element of the array is %d\n", *(&arr[0]));
    printf("The Value at adress of second Element of the array is %d\n", arr[1]);
    printf("The Value at adress of third Element of the array is %d\n", *(arr + 2));
    printf("The Value at adress of fourth Element of the array is %d\n", *(&arr[3]));
    printf("The Value at adress of fifth Element of the array is %d\n", arr[4]);
    printf("The Value at adress ofsixth Element of the array is %d\n", *(arr + 5));
    return 0;
}
