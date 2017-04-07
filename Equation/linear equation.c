#include <stdio.h>
#include <math.h>


int main()
{


    float a,b,c;
    int x= 1;
    while(x == 1)
{


    puts("The equation should be in the format ax + b = c");

    printf("Enter the coefficient of x:");
    scanf("%f", &a);

    printf("Enter the integer b:");
    scanf("%f", &b);

    printf("Enter the integer c:");
    scanf("%f", &c);

    printf("X = %.2f\n\n", (c-b)/a);

    puts("Press 1 to continue and any other value to finish.");
    puts("Do you want to continue:");
    scanf("%d", &x);

}


    return 0;
}
