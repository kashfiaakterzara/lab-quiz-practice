#include <stdio.h>

double validtriangle(double a, double b, double c);

int main()
{
    double a, b, c;
    printf("Enter three sides: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (validtriangle(a, b, c))
    {
        if (a == b && b == c)
        {
            printf("Equilateral triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
    else
    {
        printf("Not a Triangle");
    }

    return 0;
}
double validtriangle(double a, double b, double c)
{
    return ((a + b > c) && (a + c > b) && (b + c > a));
}
