// Online C compiler to run C program online
#include <stdio.h>
 int* Mid(int arr[],int len){
     return &arr[len/2];
 }
int main() {
        int arr[5] ={0,1,2,3,5};
        int len = sizeof(arr)/sizeof(int);
       int *mid = Mid(arr,len);
       printf("%d",*mid);
}


