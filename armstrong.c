#include<stdio.h>
int main()
{
	int n , remainder, sum= 0;
	printf("enter the number:\n");
	scanf("%d", &n);
	int temp = n;
	while(n>0)
	{
		remainder = n% 10;
		sum = sum+(remainder*remainder*remainder);
		n  = n/10;
	}
	if(sum == temp )
	{
		printf("the number is armstrong");	
	}
	else
	{
		printf("number is not armstrong");	
	}
return 0;
}