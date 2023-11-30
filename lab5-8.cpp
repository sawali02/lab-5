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
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{if(a[i]==a[j+1])
			a[i]=a[j+1];
			
			}
			
			
		}
		for(int i=0;i<n;i++)
		printf("%d",a[i]);
		return(0);
	}
		
