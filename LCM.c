// find LCM

#include<stdio.h>
#include<conio.h>

int main()
{
	int no1, no2, i;
	printf ("Enter two numbers:\n");
	scanf("%d %d", &no1, &no2);
	
	for (i=1; i>0; i++)
	{
		if (i%no1==0 && i%no2==0)
		{
			printf("%d",i);
			break;
		}
	
	}
	return 0; 
}
