// 1 -D Arrays - 1
#include <stdio.h>
int main()
{
    int marks[4]; // also use this... int marks[4]={54,40,43,53}; - This is call  Declaration & intilization (in same line)
    marks[0] = 54;
    marks[1] = 40;
    marks[2] = 43;
    marks[3] = 53;
    printf("Marks of student 1 is %d\n", marks[0]);
    printf("Marks of student 2 is %d\n", marks[1]);
    printf("Marks of student 3 is %d\n", marks[2]);
    printf("Marks of student 4 is %d\n", marks[3]);
    return 0;
}
