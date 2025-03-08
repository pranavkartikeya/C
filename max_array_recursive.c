#include <stdio.h>


int max(int arr[],int n){
    if(n==1) {return arr[0];}


    int Max= max(arr,n-1);

    return arr[n-1]>Max?arr[n-1]:Max;


}

int main() {

    int arr[]={1,2,4,3,5};
    int len= sizeof(arr)/sizeof(arr[0]);
    printf("%d",max(arr,len));



}
