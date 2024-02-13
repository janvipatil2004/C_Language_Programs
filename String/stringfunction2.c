#include<string.h>
int main()
{
	char name1[11],name2[11];
	
	printf("\nEnter the Name1:");
	scanf("%s",&name1);
	
	printf("\nEnter the Name2:");
	scanf("%s",&name2);
	
	printf("\nName1=%s",name1);
	printf("\nName2=%s",name2);
	
	printf("\nComaprison=%d",strcmp(name1,name2));
	if(strcmp(name1,name2)==0)
	{
		printf("\nNames Are Same");
	}
	else
	{
		printf("\nNames are Not Same");
	}
	strcat(name1,name2);
	printf("\nName1=%s",name1);
	printf("\nName2=%s",name2);
	return 0;
	
}