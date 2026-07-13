#include<stdio.h>
int days_in_month(int month, int year);

int main(){
    int month, year;

    printf("Enter month and year: ");
    scanf("%d %d", &month, &year);

    int days = days_in_month(month, year);

    if(days == 0){
        printf("Invalid Month");
    }

        
    else{
    printf("%d month of %d year has %d days", month, year, days);
    }
 return 0;
}
  int days_in_month(int month, int year)
  {
  switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
     return 31;

    case 4:
    case 6:
    case 9:
    case 11:
    return 30;

    case 2:
    if(((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))){
        return 29;
    }
        else {
        return 28;
        }
        default:
        return 0;
    }

  }
   



  





