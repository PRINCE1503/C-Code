// Functions use - 2 (with argument & without return value)
#include <stdio.h>
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    star(7);
    return 0;
}
