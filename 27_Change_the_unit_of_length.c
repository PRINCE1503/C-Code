// Change the unit of length Without using arrays
#include <stdio.h>
int main()
{
    char input;
    float Kms_To_Miles = 0.621371;
    float Inches_To_Foot = 0.0833333;
    float Cms_To_Inches = 0.393701;
    float Pound_To_Kgs = 0.453592;
    float Inches_To_Meters = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the input character. q to quit\n1. kms to miles\n2. inches to foot\n3. cms to inches\n4. pound to kgs\n5. inches to meters\n");
        scanf(" %c", &input);
        //    printf("The character is '%c'", input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;
        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Kms_To_Miles;
            printf("%.3f Kms is equal to %.3f Miles\n\n\n", first, second);
            break;
        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Inches_To_Foot;
            printf("%.3f Inches is equal to %.3f Foot\n\n\n", first, second);
            break;
        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Cms_To_Inches;
            printf("%.3f Cms is equal to %.3f Inches\n\n\n", first, second);
            break;
        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Pound_To_Kgs;
            printf("%.3f Pounds is equal to %.3f Kgs\n\n\n", first, second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Inches_To_Meters;
            printf("%.3f inches is equal to %.3f meters \n\n\n", first, second);
            break;
        default:
            break;
        }
    }
end:
    return 0;
}
