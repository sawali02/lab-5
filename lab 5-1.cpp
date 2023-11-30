#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf(" element %d",i);
		scanf("%d",&a[i]);
	}
	int maxno=a[0];
	int minno=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>maxno)
		maxno=a[i];
		if(a[i]<minno)
		minno=a[i];
		
		
	}
	printf("max no. is %d \n min no. is %d",maxno,minno);
	int avg=a[0]/5;
	for(int i=1;i<n;i++)
	
	
		avg=avg+a[i]/5;
	
	
	printf("average of the unsorted array is %d",avg);
	
	
	return(0);
}
