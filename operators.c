#include<stdio.h>
int main(){
int x=100;
int y = 50;
int z = x + y;
int a = x - y;
int b = x * y;
int c = x / y;
int d = x % y;
printf("x = %d\n", x);
printf("y = %d\n", y);
printf("sum = %d\n", z);
printf("difference = %d\n", a);
printf("product = %d\n", b);
printf("quotient = %d\n", c);
printf("remainder = %d\n", d);
printf("increment of sum =%d\n", ++z);
printf("decrement of y = %d", --y);
return 0;}
