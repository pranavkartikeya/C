// Online C compiler to run C program online
#include <stdio.h>
#define N 5
int main() {
      
      printf("enter");
      int arr[N],*ptr;
      for(ptr=arr;ptr< arr+N;ptr++){
          
          scanf("%d",ptr);
          
      }
      
      for(ptr=arr+N-1;ptr>=arr;ptr--){
          printf("%d",*ptr);
      }
      
      
      
    
 }



