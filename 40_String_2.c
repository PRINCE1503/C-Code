// String -2
#include <stdio.h>
int main()
{
    char str[10];
    printf("Enter the string name: \n");
    gets(str);
    printf("Using printf:\n");
    printf("%s\n", str);
    printf("Using puts:\n");
    puts(str);
    return 0;
}