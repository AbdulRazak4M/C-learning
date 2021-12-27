// write a program to find the multiplication table of number

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i,mul;
	printf("Enter the number: ");
	scanf("%d",&no);
	i=1;
	
	while(i<=10)
	{
		mul=no*i;
		i++;
		printf("The table of number is:%d\n",mul);
	}
	return 0;
}
