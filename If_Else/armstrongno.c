#include<stdio.h>
int main()
{
	int n,r,sum,temp;
	printf("\nEnter Any Number:");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=(n/10);
	}
	if(temp==sum)
	{
		printf("\nArmstrong No.");
	}
	else
	{
		printf("\nNot Armstrong No.");
	}
	return 0;
}