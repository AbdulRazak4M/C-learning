// find number is prime or not

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i, flag=1;
	printf ("Enter the number:\n");
	scanf("%d", &no);
	
	for (i=2; i<no; i++)
	{
		if(no%i==0)
		{
			flag=0;
			break;
		}
		else
		{
			flag=1;
		}
	}
	if (flag)
	{
		printf("The number %d is prime",no);
	}
	else
	{
		printf("The number %d is not prime",no);
	}
	return 0;
}
