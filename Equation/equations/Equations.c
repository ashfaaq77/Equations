#include <stdio.h>
#include "part2.h"
#include <math.h>

int main()
{
    int op;
    float a,b,c,d,e,f,g,h,i,y,pro=1,multiple=1, ans3, ans4,t,s,x1,x2,y1,y2,i1,i2,x,z,w;
    int count =1;

    while(count == 1)
    {

    puts("1.Linear Equation");
    puts("2.Simultaneous equation");
    puts("3.Quadratic Equation");
    puts("4.Cubic equation");
    puts("Choose a number for an operation:");
    scanf("%d", &op);
    puts("");

    switch(op)
    {
        case 1:

            puts("The equation should be in the format ax + b = c");

            printf("Enter the coefficient of x:");
            scanf("%f", &a);

            printf("Enter the integer b:");
            scanf("%f", &b);

            printf("Enter the integer c:");
            scanf("%f", &c);

            printf("X = %.2f\n\n", (c-b)/a);
            break;

        case 2:
            puts("\nThe format : ax + by = c");

            printf("Enter the coefficient of x, y, and the integer c for the first equation:\n");
            scanf("%f%f%f", &x1, &y1, &i1);

            printf("Enter the coefficient of x, y, and the integer c for the second equation:\n");
            scanf("%f%f%f", &x2, &y2, &i2);




            printf("X = %.2f and Y = %.2f\n", (i2-((y2*i1)/y1))/(x2-((y2*x1)/y1)), (i1-(x1*((i2-((y2*i1)/y1))/(x2-((y2*x1)/y1)))))/y1);




            break;

        case 3:


            puts("Your equation should be in the format ax^2 + bx + c = 0");

            printf("Enter the coefficient of x^2:");
            scanf("%f", &a);

            printf("Enter the coefficient of x:");
            scanf("%f", &b);

            printf("Enter the coefficient of the integer:");
            scanf("%f", &c);


            Quadraticformula(a,b,c);
            break;

        case 4:


            puts("The equation should be in the format ax^3 + bx^2 + cx + d = 0");


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
            break;


    }

    puts("Press 1 to continue or any other value to end.");
    scanf("%d", &count);
}




    return 0;
}
