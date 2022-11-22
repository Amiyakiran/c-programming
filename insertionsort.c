#include<stdio.h>
int main()
{
	int n, i, j, temp;
	printf("enter the total elements in the array:\n");
	scanf("%d", &n);
	int a[50];
	printf("enter the elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	 for (i = 1; i < n; i++) 
  	  {
       		 j = i;
       		 while (j > 0 && a[j - 1] > a[j]) 
       			 {
            				temp = a[j];
            				a[j] = a[j - 1];
            				a[j - 1] = temp;
            				j--;
       			 }
    	}
	printf("the sorted array is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
return 0;
}