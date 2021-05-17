// Macros
#include <stdio.h>
int main()
{
    printf("This File name is %s\n", __FILE__);
    printf("Today's Date is %s\n", __DATE__);
    printf("Now, The time is %s\n", __TIME__);
    printf("This is %dth line of your C Programm\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}