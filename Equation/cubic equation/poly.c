#include <stdio.h>
#include <math.h>
#include "part2.h"


int main()
{


    float a,b,c,d,e,f,h,i,g,y;
    int z=1;
    puts("The equation should be in the format ax^3 + bx^2 + cx + d = 0");

while(z == 1)
{


    printf("Enter the coefficient of x^3:");
    scanf("%f", &a);

    printf("Enter the coefficient of x^2:");
    scanf("%f", &b);

    printf("Enter the coefficient of x:");
    scanf("%f", &c);

    printf("Enter the integer d:");
    scanf("%f", &d);



    for(e=1;e>0 && e<10;e+=0.5)
    {
        y=(a*(pow(e,3)))+(b*(pow(e,2)))+(c*(e))+(d);
        if(y == 0 )
        {
            f=e;

            break;
        }
    }

     for(e=-1;e<0 && e>-10;e-=0.5)
    {
        y=(a*(pow(e,3)))+(b*(pow(e,2)))+(c*(e))+(d);
        if(y == 0)
        {
            f=e;

            break;
        }
    }

    g = -f;
    h = b -(g*a);
    i = c - (h*g);

    printf("\n");
    Quadraticformula(a,h,i);
    printf("x = %.4f\n\n", f);

    puts("Press 1 to continue and any other value to end.");
    puts("Do you want to continue");
    scanf("%d", &z);
}



    return 0;
}
