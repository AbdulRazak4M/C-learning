#include<stdio.h>
#include<conio.h>

int main()
{
	int x=10,y=10;
	float z;
	
	z=x+y;
	printf("\nThe value of z:%d",z);
	
	x=x+y;
	printf("\nThe value of x:%d",x);
	
	y+=z;
	printf("\nThe value of y:%d",y);
	
	x++;
	printf("\nThe value of x:%d",x);
	
	y=x++;
	printf("\nThe value of y:%d",y);
	
	z=++y;
	printf("\nThe value of z:%d",z);
}
