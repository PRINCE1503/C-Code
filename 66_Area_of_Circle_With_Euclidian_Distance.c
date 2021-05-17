// Area of Circle With Euclidian Distance
#include <stdio.h>
#include <math.h>
#define PI 3.14 
float Edistance(int x1, int y1, int x2, int y2)
{
    int a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return sqrt(a);
}
float d(int x1, int y1, int x2, int y2,float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}
int main()
{
    int x1, y1, x2, y2;
    float dst;
    printf("Enter the value of x1 : ");
    scanf("%d", &x1);
    printf("Enter the value of y1 : ");
    scanf("%d", &y1);
    printf("Enter the value of x2 : ");
    scanf("%d", &x2);
    printf("Enter the value of y2 : ");
    scanf("%d", &y2);
    dst = d(x1, y1, x2, y2, Edistance);
    printf("The distance between these point is : %.2f\n",dst);
    printf("So, The area of these circle is : %.3f\n",PI*dst*dst);
    return 0;
}
