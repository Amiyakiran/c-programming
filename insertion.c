#include<stdio.h>
int main()
{
	int n, i, m, p ;
	printf("enter the total number of elements in array\n");
	scanf("%d", &n);
	int ar[n+1];
	printf("enter the elements to the array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &ar[i]);
	}
	printf("enter the number you want to insert\n");
	scanf("%d", &m);
	printf("enter the position to insert:\n");
	scanf("%d", &p);
	
	for (i = n - 1; i >= p - 1; i--)   
	{ 
        		ar[i+1] = ar[i];	
	
	}
   		 ar[p-1] = m;
	
	printf("the new array is:\n");
	for(i=0; i<= n; i++)
	{
		printf("%d\t", ar[i]);
	}
	return 0;
}