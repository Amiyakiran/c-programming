#include<stdio.h>
int main(){
int i;
int n;
int m;
char ch;
do {
          printf("enter the number :\t ");
          scanf("%d", &n);

          printf("\nenter 1 to get even number or 0 to get odd number:\t");
          scanf("%d", &m);

              switch (m){
                       case 1:
                                     for(i=2; i<=n; i=i+2){printf("%d\t", i);}
                                     break;
                       case 0:
                                     for(i=1; i<=n; i=i+2){printf("%d\t", i);}
                                     break;
                      default:
                                        printf("\nentered a wrong number\n");
                                }
    
       printf ("\nDo you want to continue: y/n\t");
    scanf (" %c", &ch);
    } while(ch == 'y');
   return 0;
}