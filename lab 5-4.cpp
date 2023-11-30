#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("elements %d:",i);
		scanf("%d",&a[i]);
	}
	int t;
	for(int i=0;(i%2==0) && i<n;i++)
	{
		a[i]=t;
		a[i+1]=a[i];
		t=a[i+1];
		i++;
	}
	for(int i=0;i<n;i++)
	
	printf("the new array is %d",a[i]);
	return(0);
}

