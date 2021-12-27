// check number is palindrome or not 

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,rev=0,rem,i;
	printf("Enter the number:");
	scanf("%d",&no);
	int temp=no;
	for ( i=1; no!=0; i++)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}
	no=temp;
	if(no==rev)
	{
		printf("The number is palindrome\n");
	}
	else
	printf("the number is not palindrome");
	return 0;
}
