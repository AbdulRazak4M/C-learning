// full-pyramid
/*      1
	   232
	  34543
	 4567654
	567898765     */
	
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,count=1;
	for (i=1; i<=5; i++)
	{
	
		for (j=1; j<=9; j++)
		{
			if(j>=6-i&&j<=4+i&&j<=5)
			{
				printf("%d",count++);
			}
			else if(j>=6-i&&j<=4+i&&j>=5)
			{
			printf("%d",count--);
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
