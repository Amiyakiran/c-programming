#include<stdio.h>
int main()
{
int n, i, v ;
printf("enter the total number of elements in array:\n");
scanf("%d", &n);
int ar[n];
printf("enter the array elements:\n");
for (i=0; i<n; i++)
	{
		scanf("%d", &ar[i]);
	}
printf("enter the index to delete:\n");
scanf("%d", &v);
for ( i = v  ; i < n - 1 ; i++ ) 
	{
        		ar[i] = ar[i+1]; 
	}
printf("the new array is:\n");
for(i=0; i<n-1; i++)
	{
		printf("%d\t", ar[i]);
	}
return 0;
}