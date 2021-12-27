#include<stdio.h>
#include<conio.h>
//student=i, round=j
int main()
{
	int i,j,a[3][3],student;
	int avg[3],max;
	printf("Enter the oxygen level for every round:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			{
				scanf("%d",&a[i][j]);
			}
			if (a[i][j]<1||a[i][j]>100)
			{
				a[i][j]=0;
			}
		}
	}
	
	// printing thematrix of student data
	
/*	printf("The oxygen level you enetered for students is:\n");
	int student=1;
	for(i=0; i<3; i++)
	{printf ("Student-%d =",student);
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
		student++;
	}*/
	
	// calculating the avaerage
	for (i=0; i<3; i++)
	{ int sum=0;
		for (j=0; j<3; j++)
		{
			sum=sum+a[i][j];
		}
		 avg[3];
		avg[i]=sum/3;
	//	printf("avg[%d]==%d\n\n",i,avg[i]); printing the average
	}
	 max=avg[0];
		student=1;
		for (i=0; i<3; i++)
		{ 
			if (avg[i]<70)
			{
				printf("The unfit trainee is\n tainee : %d with oxyb lvl: %d\n\n ",student,avg[i]);
			}
			else if (avg[i]>=70)
			{
				printf("selected trainee\n trainee %d--> oxy lvl: %d\n\n",student,avg[i]);
			}
			
			student++;
		}
		student=1;
		for (i=0;i<3;i++)
		{
			if (max < avg[i])
			{
				max=avg[i];
			}
			student++;
			break;
		}
		printf ("Fittest trainees is:\n Trainee:%d and oxy lvl: %d\n\n", student,max);
	
		return 0;	
}
			
