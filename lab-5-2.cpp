#include<stdio.h>
int main()
{
	int i,n,t;
	printf(" enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
	return(0);
}
