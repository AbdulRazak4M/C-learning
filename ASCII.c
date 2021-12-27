//print all the ASCII characters with values

#include<stdio.h>
#include<conio.h>

int main()
{ char ch;
	int i=1;
	while(i<=130)
	{
		ch=i;
		printf("The ascii character and his humbers is %c = %d\n", ch,i);
		i++;
	}
}
