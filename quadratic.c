#include<stdio.h>
#include<math.h>
int main(){
int a, b, c;
float d,p,s, r1, r2;
char ch;
printf("quadratic equation: ax^2 + bx +c\n");
do{
printf("enter the values for a:");
scanf("%d", &a);
printf("enter the values for b:");
scanf("%d", &b);
printf("enter the values for c:");
scanf("%d", &c);
d= (b*b)-4*a*c;
p = sqrt(d);
s= 2*a;
if (p>0)
           {   r1= (-b +p)/s;
	 r2 = (-b - p)/s;
	 printf("the roots are\t r1 : %f\t r2: %f", r1, r2);
           }
else if (p == 0)
	{	r1 = r2 = -b/s;
		printf ("the roots are same r1= r2 = %f", r1);
	}
else	{
		printf("the roots are imaginary");
	}
printf ("\nDo you want to continue: y/n\t");
scanf (" %c", &ch);
 } 
while(ch == 'y');
return 0;
}
