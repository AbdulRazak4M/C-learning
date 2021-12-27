// find HCF

#include<stdio.h>
#include<conio.h>

int main()
{
	int no1,no2,i,HCF;
	printf ("Enter the two  numbers:");
	scanf("%d %d", &no1, &no2);
	
	for (i=1; i<no1||i<no2; i++)
	{
		if(no1%i==0 && no2%i==0)
		{
	    	HCF=i;
	    }
	}
	printf("%d\n",HCF);

return 0;
}
