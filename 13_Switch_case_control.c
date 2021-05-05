// Switch case control
#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter Your age: \n");
    scanf("%d", &age);

    printf("Enter Your Marks: \n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("You Marks are 45");
            break;

        default:
            printf("You Marks are not 45");
        }
        break;
    case 13:
        printf("The age is 13\n");
        break;
    case 23:
        printf("The age is 23\n");
        break;
    default:
        printf("The age is not 3, 13 or 23");
    }
    return 0;
}
