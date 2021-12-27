// print all armstrong numbers between 1 to n

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i, end;
	int sum=0, mul, count=0,temp;
	int rem;
	printf("Enter the upper limit number\n");
	scanf("%d",&end);
	
	for (no=1; no<=end; no++)
	{	sum=0;
		count=0;
		temp=no;
		while(temp!=0)
		{
			temp=temp/10;
			count++;
		}
	//	printf("%d\n", count);
		
		temp=no;
		
		while(temp!=0)
		{ 	
			mul=1;
			rem=temp%10;
			for (i=1; i<=count; i++)
			{
				mul=mul*rem;
			}
			sum=sum+mul;
			temp=temp/10;
		}
		if (sum==no)
		{
			printf("%d\n",no);
		}	
		
	}
	return 0;
}
