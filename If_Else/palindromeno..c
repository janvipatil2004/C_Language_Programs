#include<stdio.h>
int main()
{
	int n,r,sum=0,temp=0;
	printf("\nEnter Any Number:");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\nPalindrome Number:");
	}
	else
	{
		printf("Not Palindrome Number:");
	}
	return 0;
}