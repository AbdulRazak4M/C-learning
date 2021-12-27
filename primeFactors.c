// find prime factors of number

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i,j,flag=1;;
	printf("Enter the number:\n");
	scanf("%d", &no);
	
	for (i=2; i<no; i++)
	{
		if (no%i==0)
		{
			flag=1;
			//printf("%d\n",i);
			for (j=2; j<i; j++)
			{ 
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
			if (flag)
			{
				printf("%d\n",i);
			}
		}
		
	}
	return 0;
}
