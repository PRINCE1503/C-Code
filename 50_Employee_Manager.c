#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n************Employee details of XYZ Pvt. Ltd.************\n\n");
    int id, i = 0;
    char name, surname;
    char *ptr;
    char *Name;
    char *Surname;
    while (i < 3)
    {
        printf("\n---------Details of Employee %d---------\n", i + 1);
        printf("Enter the Lenght of Employee ID : ");
        scanf("%d", &id);
        ptr = (char *)malloc((id + 1) * sizeof(char));
        printf("Enter the Employee ID : ");
        scanf("%s", ptr);
        getchar();
        printf("Enter the Employee Name : ");
        Name = (char *)malloc((name + 1) * sizeof(char));
        scanf("%s", Name);
        getchar();
        printf("Enter the surname of Employee %d: ", i + 1);
        Surname = (char *)malloc((surname + 1) * sizeof(char));
        scanf("%s", Surname);
        printf("***************************************\n");
        printf("The Lenght of Employee %d's ID : %d\n", i + 1, id);
        printf("Employee %d's ID : %s\n", i + 1, ptr);
        printf("Employee %d's Name : %s\n", i + 1, Name);
        printf("Employee %d's Surnmae : %s\n", i + 1, Surname);
        printf("***************************************\n");
        i++;
        free(ptr);
        free(Name);
        free(Surname);
    }
    return 0;
}
