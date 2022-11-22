#include<stdio.h>
int main(){
int n, i;
int count =0;
char ch;
do{
printf("enter the number:\n");
scanf("%d", &n);
for (i=1; i<=n; i++)
	{if(n%i==0)
		{count++;}
	}
if(count==2)
	{printf("number is prime");}

else	{printf("number is not prime");}
printf ("\nDo you want to continue: y/n\t");
scanf (" %c", &ch);
 } 
while(ch == 'y');
return 0;
}
