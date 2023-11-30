#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("element %d:",i);
		scanf("%d",&a[i]);
	}
	
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
		
	}
	printf("the new array is");
	for(int i=0;i<n;i++)
	printf(" %d",b[i]);
	return(0);
}
