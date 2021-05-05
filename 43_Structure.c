// Structure
#include <stdio.h>
struct Student
{
    int id;
    int marks;
};
int main()
{
    struct Student Prince, Mayur, Harsh;
    Prince.id = 1;
    Mayur.id = 2;
    Harsh.id = 3;
    Prince.marks = 98;
    Mayur.marks = 91;
    Harsh.marks = 89;
    printf("Prince's id is %d & His marks is %d\n", Prince.id, Prince.marks);
    printf("Mayur's id is %d & His marks is %d\n", Mayur.id, Mayur.marks);
    printf("Harsh's id is %d & His marks is %d\n", Harsh.id, Harsh.marks);
    return 0;
}
