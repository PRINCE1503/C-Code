// Dnagling Pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 15;
    ptr[1] = 30;
    ptr[2] = 13;
    ptr[3] = 49;
    free(ptr); // Now ptr is dangling Pointer
    printf("%d\n", ptr);
    return 0;
}
