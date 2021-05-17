// Command Line Arguments.c
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is : %d\n",argc);
    for (int i=0;i<argc;i++)
    {
        printf("This argument at index number %d has value of : %s\n",i+1,argv[i]);
    }
    return 0;
}
