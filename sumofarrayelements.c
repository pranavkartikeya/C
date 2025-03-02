// Online C compiler to run C program online
#include <stdio.h>

int main() {
      int arr[] = {0,1,1,2,2};
      int sum=0;
      int len= sizeof(arr)/sizeof(int);
      int *p;
      for (p=&arr[0];p<=&arr[len];p++){
           sum+=*p;
         }
         printf("%d",sum);
    
 }



