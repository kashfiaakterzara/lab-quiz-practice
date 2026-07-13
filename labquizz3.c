#include<stdio.h>
double discounted_price(double price, int type);
int main(){
    double price;
    int type;
    printf("Enter price: ");
    scanf("%lf", &price);

    printf("Enter customer type: ");
    scanf("%d", &type);

    printf("Final price = %.2lf\n", discounted_price);
    return 0;
 }


double discounted_price(double price, int type){
    switch(type){
        case 1:
          return price * 0.95;
        case 2:
         return price * 0.90;
        case 3:
        return price * 0.85;
        case 4:
        return price * 0.80; 
        default:
        return price;
    }
}