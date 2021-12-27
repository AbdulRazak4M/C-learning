// prime numbers sum between  1 to n

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i, j,sum=0, flag=1;
	printf ("Enter the number:\n");
	scanf("%d", &no);
	
	for (i=2; i<=no; i++)
	{
		for (j=2; j<i; j++)
		{
		if(i%j==0)
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
	 		sum=sum+i;
		}
	}
	printf("the sum is %d",sum);
	
	return 0;
}
