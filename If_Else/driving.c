#include<stdio.h>
int main()

{
  int age;
  
  printf("\nEnter Any Age:");
  scanf("%d",&age);
  
  if(age>=18)
  {
  	printf("\nYou Are Allowed Driving: ");
  }
  else
  {
  	printf("\nYou Are Not Allowed Driving:");
  }
  return 0;

}