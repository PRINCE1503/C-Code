// Array Reversal
#include <stdio.h>
void revArr(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void printArray(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 5, 9, 13, 17, 21, 25};
    printArray(arr);
    revArr(arr);
    printf("\n\nAfter reversing the array.... \n");
    printArray(arr);
    return 0;
}