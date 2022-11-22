#include<stdio.h>
int main()
{
	int i, n, m ;
	printf("enter the total number of elements:\n");
	scanf("%d", &n);
	int a[n];
	int found = 0;
	printf("enter the elements:\n");
	for( i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the element to search:\n");
	scanf("%d", &m);
	for(i=0; i<n; i++)
	{
		if(a[i]==m)
			{found=1;
			break;}
	}
	if(found==1)
	{
		printf("the number %d is there in the array at the position %d\n" , m, i+1);
	}
	else{printf("not found\n");}
return 0;
}