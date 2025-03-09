#include <stdio.h>
#include<stdlib.h>

   int comp(const void* a ,const void* b){
       return *(int*)a-*(int*)b ;

   }

int main() {

    int arr[]={1,5,6,2,3,9};
    int len= sizeof(arr)/sizeof(arr[0]);
    qsort(arr,len,sizeof(int),comp);

    for(int i=0;i<=len-1;i++){
       printf("%d",arr[i]);

    }
}

