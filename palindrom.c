#include<stdio.h>
int main()
{
	int n, remainder, reverse=0;
	printf("enter the number:\n");
	scanf("%d", &n);
	int temp = n;
	while(n>0)
		{
			remainder = n % 10;
			reverse = (reverse *10)+ remainder;
			n = (n/10);
		}
	if( temp == reverse)
		{
			printf("the number is palindrom");
		}
	else
		{
			printf("the number is not palindrom");
		}
return 0;
}