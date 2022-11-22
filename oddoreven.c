#include<stdio.h>
int main(){
int i;
int n;
int m;
printf("enter the number :\n ");
scanf("%d", &n);

printf("enter 1 to get even number or 0 to get odd number:\n");
scanf("%d", &m);

  switch (m){
       case 1:
                 for(i=2; i<=n; i=i+2){printf("%d\t", i);}
                 break;
         case 0:
                   for(i=1; i<=n; i=i+2){printf("%d\t", i);}
                    break;
           default:
                   printf("entered a wrong number");
                          }

printf("\nthankyou\n");

return 0;}