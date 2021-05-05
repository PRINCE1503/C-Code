#include <stdio.h>
struct Driver
{
    char Name[20];
    char DrivingLicenseNo[20];
    char Route[50];
    int Kms;
};
int main()
{
    struct Driver d1, d2, d3;
    printf("******Enter the details of These Drivers******\n");
    printf("Enter the details of First Driver\n");
    printf("Name:");
    scanf("%s", &d1.Name);
    printf("Driving License No.:");
    scanf("%s", &d1.DrivingLicenseNo);
    printf("Route:");
    scanf("%s", &d1.Route);
    printf("Kms:");
    scanf("%d", &d1.Kms);
    printf("\n");
    printf("Enter the details of Second Driver\n");
    printf("Name:");
    scanf("%s", &d2.Name);
    printf("Driving License No.:");
    scanf("%s", &d2.DrivingLicenseNo);
    printf("Route:");
    scanf("%s", &d2.Route);
    printf("Kms:");
    scanf("%d", &d2.Kms);
    printf("\n");
    printf("Enter the details of First Driver\n");
    printf("Name:");
    scanf("%s", &d3.Name);
    printf("Driving License No.:");
    scanf("%s", &d3.DrivingLicenseNo);
    printf("Route:");
    scanf("%s", &d3.Route);
    printf("Kms:");
    scanf("%d", &d3.Kms);
    printf("\n");
    printf(">>>>>>>>>>Printing These Drivers information <<<<<<<<<<\n");
    printf("\n");
    printf("First Driver ");
    printf("Name : %s\n", d1.Name);
    printf("Driving License No. : %s\n", d1.DrivingLicenseNo);
    printf("Route : %s\n", d1.Route);
    printf("Kms : %d\n", d1.Kms);
    printf("\n\n");
    printf("Second Driver ");
    printf("Name : %s\n", d2.Name);
    printf("Driving License No. : %s\n", d2.DrivingLicenseNo);
    printf("Route : %s\n", d2.Route);
    printf("Kms : %d\n", d2.Kms);
    printf("\n\n");
    printf("Third Driver ");
    printf("Name : %s\n", d3.Name);
    printf("Driving License No. : %s\n", d3.DrivingLicenseNo);
    printf("Route : %s\n", d3.Route);
    printf("Kms : %d\n", d3.Kms);
    printf("\n\n");
    return 0;
}