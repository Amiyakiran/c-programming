#include<stdio.h>
int main(){
int n;
printf("enter the number");
scanf("%d", &n);
if (n<0)
{printf("the enter number is negative");}
else if(n==0)
{printf("the number is neither positive nor negative");}
else{ printf("the entered number is postive");}
return 0;
}