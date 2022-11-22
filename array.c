#include<stdio.h>
int main(){
int x[] ={1, 2, 4, 6, 8, 10};
x[0] = 10;
int i;
for (i=0; i<6; i++)
{printf("%d\t",x[i]);
}
return 0;
}