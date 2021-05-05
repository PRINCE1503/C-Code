// String Functions
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "PRINCE";
    char s2[] = "PADMANI";
    printf("The lenght of s1 is %d\n", strlen(s1));
    printf("The lenght of s2 is %d\n", strlen(s2));
    puts(strcat(s1, s2));
    printf("\n\nNow the lenght of s1 is %d\n", strlen(s1));
    printf("The lenght of s2 is %d\n", strlen(s2));
    puts(strrev(s2));
    strrev(s2);
    printf("\n\n");
    char s3[20];
    strcpy(s3, s1);
    puts(s3);
    printf("\n\n\n");
    printf("The strcmp for s1, s2 returned %d\n", strcmp(s1, s2));
    printf("The strcmp for s1, s2 returned %d\n", strcmp(s2, s1));
    printf("The strcmp for s1, s3 returned %d\n", strcmp(s3, s1));
    return 0;
}