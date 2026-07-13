#include <stdio.h>
double calculate(double a, double b, char op);

int main(){
 double a, b;
 char op;
 printf("Enter first integer: ");
 scanf("%lf", &a);

 printf("Enter operator(+-/*): ");
 scanf(" %c", &op);

 printf("Enter second integer: ");
 scanf("%lf", &b);

 printf("Result = %.2lf", calculate(a, b, op));
 return 0;
}

double calculate(double a, double b, char op){
    switch(op){
        case '+':
        return a + b;

        case '-':
        return a - b;

        case '*':
        return a * b;

        case '/':
        if(b != 0){
            return a / b;
        }
        else{
            printf("Number is not divisible by 0");
        }
        default:
        printf("Invalid operator");
    }
}