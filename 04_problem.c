#include<stdio.h>

int main()
{
    //write a program & put enter from user to know that either a year is leap year or not
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    if(( year%4==0 && year%100!=0) ||year%400==0){
        printf("The year is a leap year");
    }
        else{
            printf("The year is not a leap year");
        }
    return 0;
}