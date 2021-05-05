// Do While loop
#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index); /*for print value with 1......n    try printf("%d",index+1) in place of printf("%d",index) */
        index = index + 1;
    } while (index < num);

    return 0;
}
