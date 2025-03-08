#include <stdio.h>
#include <string.h>

int largest(int arr[],int len){
    
    int max,min;
     max=arr[0];
     min=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
        
    }
    printf("%d""%d",max,min);
}

int main() {
    
    int arr[]={1,2,4,3,5};
    int len= sizeof(arr)/sizeof(arr[0]);
     largest(arr,len);    
    
}
