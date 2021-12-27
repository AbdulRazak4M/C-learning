#include <stdio.h>  
#include<math.h>  
int main()  
{  
    int num;  // variable declaration  
    int count=0;  // variable declaration  
    printf("Enter a number ");  
    scanf("%d",&num);  
   count=log10(num)+1;  
   printf("Number of digits in an integer is : %d",count);  
   return 0;  
}
