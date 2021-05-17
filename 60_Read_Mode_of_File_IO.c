// Read Mode of File IO
#include <stdio.h>
int main()
{
    char string[35];
    FILE *ptr = NULL;
    ptr = fopen("A.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of file 1.txt is : %s", string);
    fclose(ptr);
    return 0;
}