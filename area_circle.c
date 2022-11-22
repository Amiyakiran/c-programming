#include<stdio.h> 
int main() 
{ 
int r; 
char ch;
float PI = 3.14, area; 
do{
          printf("Enter radius of circle: "); 
          scanf("%d", &r); 
          area = PI * r * r; 
          printf("\nArea of circle : %f ", area); 
         printf ("\nDo you want to continue: y/n\t");
         scanf (" %c", &ch);
    } 
while(ch == 'y');
return 0;
}