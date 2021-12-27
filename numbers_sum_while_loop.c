//write a program to find the sum of all natural numbers from 1 to n

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,sum=0,i;
	printf("enter the number: \n");
	scanf("%d", &no);
	i=1;
	
	while (i<=no)
	{
		if(i%2==0) // to find even number sum
		{
		sum=sum+i;
		}
		i++;		
	}
	printf("The sum of even numbers is: %d",sum);
	return 0;
}
