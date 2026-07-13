#include<stdio.h>
int main(){
    char grade;

    printf("Enter grade: ");
    scanf(" %c", &grade);

    switch(grade){
        case 'A':
        printf("Excellent\n");
        break;

        case 'B':
        printf("Very Good\n");
        break;

        case 'C':
        printf("Average\n");
        break;

        case 'D':
        printf("Pass\n");
        break;

        case 'F':
        printf("Fail\n");
        break;

        default:
        printf("Invalid grade");


    }
    return 0;
}