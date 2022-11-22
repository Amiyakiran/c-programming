#include<stdio.h>
int main()
{
	int i, n;
	printf("enter the total number of array required:\n");
	scanf("%d", &n);
	int ar[n];
	printf("enter the array elements:\n");
	
	for(i=0; i <n; i++)
	{
		scanf("%d", &ar[i]);
	}
	printf("the array is :\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", ar[i]);
	}
	return 0;
}