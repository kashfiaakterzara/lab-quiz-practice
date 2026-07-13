#include<stdio.h>

double area(double length, double width);
double perimeter(double lenght, double width);

int main(){
    double length, width;
    printf("Enter length and width: ");
    scanf("%lf %lf", &length, &width);

    printf("Area = %.2lf\n", area(length, width));
    printf("Perimeter = %.2lf\n", perimeter(length, width));

    return 0;
}

double area(double length, double width){
    return (length * width);
}
double perimeter(double length, double width){
    return (2*(length + width));
}