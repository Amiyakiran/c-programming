#include<stdio.h>
int main()
{
	int n, i, j, temp;
	printf("enter the total number of elements:\n");
	scanf("%d", &n);
	int a[50];
	printf("enter the elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			if(a[i]> a[j])
			{
				temp= a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
return 0;
}