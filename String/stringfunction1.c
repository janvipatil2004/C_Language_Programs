#include<stdio.h>
int main()
{
	char name[11];
	int l=0;
	
	printf("\nEnter the Name:");
	scanf("%s",&name);
	
	printf("\nName=%s",name);
	l = strlen(name);
	printf("\nLength=%d",l);
	
	strupr(name);
	printf("\nUppercase Name=%s",name);
	
	strlwr(name);
	printf("\nLowercase Name=%s",name);
	
	strrev(name);
	printf("\nReverse Name=%s",name);
	return 0;
}