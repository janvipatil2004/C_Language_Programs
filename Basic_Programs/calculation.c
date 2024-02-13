#include<stdio.h>
int main()
{
	int operation;
	float a,b;
	
	printf("\n****CALCULATER***");
	printf ("\n1.ADDITION \n2.SUBSTRACTION \n3.DIVISION \n4.MULTIPLICATION \n5. EXIT");
	printf("\nEnter the Operation Number:");
	scanf("%d",&operation);
	
	printf("\nEnter any 2 Number:");
	scanf("%f %f",&a,&b);
	
	switch (operation)

	{
		case 1:
		printf("\nADDITION=%f",a+b);
		break;
		
		case 2:
		printf("\nSUBSTRACTION=%f",a-b);
		
		case 3:
		printf("\nDIVISION=%f",a/b);
		break;
		
		case 4:
		printf("\nMULTIPLICATION%f",a*b);
		break;
		
		case 5:
			printf("\nINVALID OPERATION:");
	}
	return 0;
}