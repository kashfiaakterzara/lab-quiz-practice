#include<stdio.h>
double calculatebmi(double weight, double height);

int main(){
    double weight, height, bmi;
    printf("Enter weight(kgs): ");
    scanf("%lf", &weight);

    printf("Enter height(m): ");
    scanf("%lf", &height);

    bmi = calculatebmi(weight, height);

    if(bmi < 18.5){
        printf("Underweight\n");
    }
    else if(bmi <25 ){
        printf("Normal weight\n");
    }
    else if(bmi<30){
        printf("Overweight\n");
    }
    else{
        printf("Obese\n");
    }
    return 0;
    
}

double calculatebmi(double weight, double height){
    return (weight/(height*height));
}