void Quadraticformula(float x, float y, float z);
#include <math.h>

void Quadraticformula(float x, float y, float z)
{

    float root;
    float ans;
    float ans2;
    float square;

    root = (y*y) - (4*z*x);
    square = sqrt(root);

    ans = (-y+square) / (2*x);
    ans2 = (-y-square) / (2*x);

    printf("x=%.4f   and   x = %.4f\n\n", ans, ans2);

}

