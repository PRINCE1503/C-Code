// If - Else statment
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can vote !");
    }
    else if (age >= 10)
    {
        printf("You are teenager so You can vote in school's election\n");
    }
    else
    {
        printf("You cannot vote !");
    }
    return 0;
}
