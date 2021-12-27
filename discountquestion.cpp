#include<stdio.h>
#include<conio.h>

int main()
{
	int items;
	
	float bill,discount,price;
	
	printf("Enter the number items purchased:");
	scanf("%d",&items);
	printf("Enter the price of items purchased:");
	scanf("%f",&price);
	
	bill=items*price;
	
	printf("The Bill before discount is:%f\n",bill);
	
	discount=0.2*bill;
	
	printf("The discount is:%f\n",discount);
	
	bill=bill-discount;
	printf("The final bill is:%f\n",bill);
	
	return 0;
}
