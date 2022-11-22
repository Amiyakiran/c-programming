/* fibinocci series: the thrid number is the sum of the first two numbers*/
#include<stdio.h>
int main(){
int n,i,r;
int m=0;
int p=1;
printf("enter the total number of terms\n");
scanf("%d", &n);
printf("%d\t %d\t", m,p);
for(i=0; i<n; i++)
{
    r=m+p;
    printf("%d\t", r);
    m=p;
    p=r;
}
return 0;
}
