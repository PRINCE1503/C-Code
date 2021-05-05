// Goto ( jump ) statments
#include <stdio.h>
int main()
{
label:
    printf("We are inside label\n");

    printf("Hello World\n");
    goto end;
    goto label;
end:
    printf("We are at end!\n");
    return 0;
}
