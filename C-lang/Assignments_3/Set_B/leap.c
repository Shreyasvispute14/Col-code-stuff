// Leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter a valid year:\n");
    scanf("%d",&year);

    if (((year%4==0)&&(year%100!=0))||(year%400==0)) // here "!" means boolean false...
    {
        printf("Given year %d is a leap year",year);
    }
    else{
        printf("Given year %d is not a leap year",year);
    }
    return 0;
}