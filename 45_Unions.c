// Unions
#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char name[10];
};

int main()
{
    union student s1;
    s1.id = 22;
    s1.marks = 97;
    strcpy(s1.name, "Prince");
    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The name is %s\n", s1.name); // union stored only last value
    return 0;
}