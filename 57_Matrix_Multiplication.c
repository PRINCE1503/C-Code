//  Matrix Multiplication
#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter the First Matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter %d,%d element of First Matrix : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Second Matrix : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter %d,%d element of First Matrix : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum+= a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("\n\nAnswer: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",result[i][j]);
                        
            sum=0;
        }
        printf("\n");
    }
    return 0;
}
/*1 2 3 4
2 3 4 5 
4 6 7 0

1 1 
3 4
3 5    
2 7

*/
