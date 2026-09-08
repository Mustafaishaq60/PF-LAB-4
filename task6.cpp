//Write a C program that reads a month number (1-12) and a year, then uses a switch statement to print how
//many days that month has. Handle February separately using the leap year rule from Task 4.
#include<stdio.h>
int main()
{
	int month;
	printf("Enter the number:");
	scanf("%d",&month);
	
	switch(month){
		case 1 : printf("The month january has 31 days");
		break;
		case 2 :
			int year;
				printf("Enter the year:");
                scanf("%d",&year);
			
			if(year%4==0&&year%100!=0||year%400==0){
		printf("The month febuary has 29 days");}
		else{
			printf("The month febuary has 28 days");
		}
		break;
			case 3 : printf("The month march has 31 days");
		break;
			case 4 : printf("The month april has 30 days");
		break;
			case 5 : printf("The month may has 31 days");
		break;
			case 6 : printf("The month june has 30 days");
		break;
			case 7 : printf("The month july has 31 days");
		break;
			case 8 : printf("The month august has 31 days");
		break;
			case 9 : printf("The month september has 30 days");
		break;
			case 10 : printf("The month october has 31 days");
		break;
			case 11 : printf("The month november has 30 days");
		break;
			case 12 : printf("The month december has 31 days");
		break;
		default:
		printf("Invalid month number");
		
		
		
	}
}