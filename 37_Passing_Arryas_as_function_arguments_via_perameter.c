// Passing Arryas as function arguments (via perameter)
#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 8; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 49, array[7] = 13; //You can change the array value in main function
    return 0;
}
int main()
{
    int arr[] = {13, 15, 3, 2006, 30, 9, 2004, 49};
    func1(arr);
    printf("\nThe value at 0 is %d\n", arr[0]);
    printf("The value at 7 is %d\n", arr[7]);
    return 0;
}