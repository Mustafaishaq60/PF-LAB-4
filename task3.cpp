//Write a C program that reads a student&#39;s marks (0-100) and prints the corresponding letter grade using the
//scheme below, implemented with an if-else-if-else ladder.
//Marks &gt;= 85 -&gt; A, &gt;= 70 -&gt; B, &gt;= 60 -&gt; C, &gt;= 50 -&gt; D, below 50 -&gt; F.
#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	if (number>=85){
		printf("The grade is A");
		
	}
	else	if (number>=70){
		printf("The grade is B");
		
	}
	else	if (number>=60){
		printf("The grade is C");
	}
	else	if (number>=50){
		printf("The grade is C");
		
	}
	else{
		printf("The grade is F");
	}
		
	
}