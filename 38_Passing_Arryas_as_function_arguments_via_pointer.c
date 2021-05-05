// Passing Arryas as function arguments (via pointer )
#include <stdio.h>
void func1(int *ptr)
{
    for (int i = 0; i < 8; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }
    *(ptr) = 49, *(ptr + 7) = 13;
}
int main()
{
    int arr[] = {13, 15, 3, 2006, 30, 9, 2004, 49};
    func1(arr);
    func1(arr);
    return 0;
}
