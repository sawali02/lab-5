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
		scanf("%d",&a[i]);}
	
		for(int i=0;i<n/2;i++)
		
		{int t;
		t=a[i];
		
			a[i]=a[n-i-1];
			a[n-i-1]=t;
		
		
			
			
		}
		for (int i=0;i<n;i++)
		printf("%d",a[i]);
		return(0);
}
