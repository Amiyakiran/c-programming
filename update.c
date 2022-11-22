#include<stdio.h>
int main()
{
	int n,i,p, v;
	printf("enter the total number of elements:\n");
	scanf("%d", &n);
	int a[n];
	printf("enter the elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the position to update:\n");
	scanf("%d", &p);
	printf("enter the value:\n");
	scanf("%d", &v);
	for(i=0; i<n ; i++)
	{
		if(i == p-1)
		{
		  	a[i]= v;
		  	break;
		}
	}
printf("the new array is:\n");
for(i=0; i<n; i++)
{
	printf("%d\t", a[i]);
}
return 0;
}