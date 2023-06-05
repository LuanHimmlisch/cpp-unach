#include <iostream>
#include <math.h>

using namespace std;
float cosd(double x)
{
    return cos(x * M_PI / 180);
}
float sind(double x)
{
    return sin(x * M_PI / 180);
}
float atand(double x)
{
    return atan(x) * 180 / M_PI;
}
int main()
{
    float b, k, i, f, c, t, w, d;
    printf("Coloca un angulon\n");
    scanf("%f", &b);
    f = (50 / cosd(b));
    c = (((sind(b) * f) - 3.2) / 4.905);
    if (c < 0)
    {
        printf("Error");
    }

    t = sqrt(c);
    w = 50 / t;

    d = w * t;

    if (d == 50)
    {
        printf("Si atinaste");
    }
    else if (d < 50)
    {
        printf("No atinaste");
    }
    else
    {
        printf("Te pasaste");
    }
    printf("\nEl resultado es %f", f);
    printf("\nEl resultado es %f", c);
    printf("\nEl resultado es %f", t);
    printf("\nEl resultado es %f", w);
    printf("\nEl resultado es %f", d);
    return 0;
}