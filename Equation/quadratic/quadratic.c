#include <stdio.h>
#include <math.h>
void Quadraticformula(float x, float y, float z);
#include "part2.h"



int main()
{

    float a,b,c,pro=1,multiple=1, ans3, ans4,t,s;
    int count, count1=1;

    while(count1 == 1)
{



   puts("Your equation should be in the format ax^2 + bx + c = 0");

    printf("Enter the coefficient of x^2:");
    scanf("%f", &a);

    printf("Enter the coefficient of x:");
    scanf("%f", &b);

    printf("Enter the coefficient of the integer:");
    scanf("%f", &c);


    Quadraticformula(a,b,c);

    printf("\n1 to continue and any other value to finish.\n");
    printf("Do you want to continue:\n");
    scanf("%d", &count1);

}
    system("pause");
    return 0;
}


