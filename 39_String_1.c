// String - 1
#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[] = {'P', 'R', 'I', 'N', 'C', 'E', '\0'};
    printstr(str);
    char str2[] = "PADMANI";
    printf(str2);
    return 0;
}
