#include <stdio.h>
int main(){

        int s, i ;
        int arr[s];
        printf("enter the array size:\t");
        scanf("%d", &s);

       printf("\nenter the array elements\n");
       for(i=0; i<s; i++){
          scanf("%d", &arr[i]);
         }
       for(i=0; i<s; i++){
             printf("your array is:%d\n", arr[i]);
         }
return 0;
}