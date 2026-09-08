//Write a C program that reads a year and determines whether it is a leap year. A year is a leap year if it is divisible
//by 4 and not divisible by 100, OR if it is divisible by 400.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0){
		printf("The year %d is leap year",year);
		
	}
	
	else{
		printf("The year %d is not leap",year);
	}
}