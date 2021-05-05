// Star(*) Patterns
#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversedstarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern : ");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printf("How many rows do you want? : ");
        scanf("%d", &rows);
        starpattern(rows);
        break;
    case 1:
        printf("How many rows do you want? : ");
        scanf("%d", &rows);
        reversedstarpattern(rows);
        break;
    default:
        printf("You have entered an invalid choice!");
        break;
    }
    return 0;
}
