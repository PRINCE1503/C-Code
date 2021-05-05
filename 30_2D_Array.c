// 2-D Array
#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 43, 49, 50},
                       {3, 2, 3, 3}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of array is %d.\n", i, j, marks[i][j]);
            // printf("%d ", marks[i][j]); (For print Marks like matrix\table)
        }
        printf("\n");
    }

    return 0;
}
