/*Write a C program to input month number and print total number of days in 
month using switch...case. C program to find total number of days in a month 
using switch...case. Logic to print number of days in a month 
using switch...case in C programming.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int month,year;
	printf("Enter the month number: ");
	scanf("%d",&month);
	printf("Enter year: ");
	scanf("%d",&year);
	
	switch(month)
	{
	case 1:
	printf("31 Days");
	break;
	case 2:
		if (year%4==0)
		{
			printf ("29 days");
		}
		else
		{
			printf("28 days");
		}
	break;
	case 3:
	printf("31 Days");
	break;
	case 4:
	printf ("30 days");
	break;
	case 5:
	printf("31 Days");
	break;
	case 6:
	printf ("30 days");
	break;
	case 7:
	printf("31 Days");
	break;
	case 8:
	printf("31 Days");
	break;
	case 9:
	printf ("30 days");
	break;
	case 10:
	printf("31 Days");
	break;
	case 11:
	printf ("30 days");
	break;
	case 12:
	printf("31 Days");
	break;
}

	return 0;
}
