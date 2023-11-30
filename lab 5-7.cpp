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
		int count =0,k;
		printf("enter the number k");
		scanf("%d",&k);
		for(int i=0;i<n;i++){
		
		if(a[i]==k){
		
		count++;}
	}
		printf("the frequency of the given number is %d",count);
		return(0);}
