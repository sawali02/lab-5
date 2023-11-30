#include<stdio.h>
int main()
{
	int n,k;
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("elements %d:",i);
		scanf("%d",&a[i]);}
		int j,t;
		for(int i=0;i<n-1;i++)
		{
		for(int j=0;j<(n-i-1);j++)
		{
		
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;}
				
			}
		}
			for(int i=0;i<n;i++)
			printf("%d ",a[i]);
			
			printf("enter the value of k");
			scanf("%d",&k);
			int c=a[k-1];
			int b=a[n-k];
			printf("the %dthe largest and smallest value are %d %d",k,c,b);
			return (0);
		}
