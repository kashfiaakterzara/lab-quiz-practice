#include <stdio.h>
#define PI 3.14156
double area(double radius);
double circumference(double radius);

int main(){
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Area = %.2lf\n", area(radius));
    printf("Circumference = %.2lf\n", circumference(radius));

    return 0;
}

double area(double radius){
    return PI * radius * radius;
}

double circumference(double radius){
    return 2 * PI * radius;
}