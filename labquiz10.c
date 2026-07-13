#include<stdio.h>

double calculateAverage(double a, double b, double c);
char getGrade(double avg);
int main()
{
    double a, b, c, average;
    char grade;

    printf("Enter three quiz marks: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    average = calculateAverage(a, b, c);
    grade = getGrade(average);

    printf("Average = %.2lf\n", average);
    printf("Grade = %c",grade);
    
    return 0;
}

double calculateAverage(double a, double b, double c){
    return ((a + b + c) / 3);
}

char getGrade(double avg){
    if(avg >= 80){
        return 'A';
    }
    else if(avg >= 70){
        return 'B';
    }
    else if(avg >= 60){
        return 'C';
    }
    else if(avg >= 50){
        return 'D';
    }
    else{
        return 'F';
    }
}