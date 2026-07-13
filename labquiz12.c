#include <stdio.h>

double convert_temperature(double celsius);

int main(){
    double celsius;

    printf("Enter temperature: ");
    scanf("%lf", &celsius);

    printf("Fahrenheit = %.2lf", convert_temperature(celsius));

    return 0;
}

double convert_temperature(double celsius){
    return ((celsius * 9 /5) + 32);
}