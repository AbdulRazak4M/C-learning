// find the frequency of each digit in a given number

#include<stdio.h>
#include<conio.h>

int main()
{
	long long i,j, no, rem;
	printf("Enter the number:");
	scanf("%lld",&no);
	int count=0,temp=no,freq[10];
	
/*	while(no!=0)
	{
		no=no/10;
		count++;
	}
	printf("%d\n",count);
	no=temp;*/
	
	for (i=0; i<10; i++)
	{
		freq[i]=0;
	}
	
	for (i=0; no!=0; i++)
	{
		rem=no%10;
		no=no/10;
		freq[rem]++;
	//	printf("%d\n",no);
		//printf("a[%d]---> %d\n",i,a[i]);
	}
/*	for (i=0; i<10; i++)
	{ freq[i]=0;
	for(j=0; j<10; j++)
	{
		if (a[i]==a[j])
		{
			freq[i]++;
		}
	}
	
	}*/
	
	for(i=0; i<10; i++)
	{
		printf("freq of %d-->%d\n",i,freq[i]);
	}
	
	
	
	
}
