#include <stdio.h>

int binarysearch(int arr[],int n,int key){

    int start=0,end=n-1;
    while(start<=end){
        int mid = (start+end)/2;

    if(arr[mid]<key) start=mid+1;
    else if(arr[mid]>key) end =mid-1;
    else return mid;
}
return -1;
}

int main() {

    int arr[]={1,2,3,4,5};
    int len= sizeof(arr)/sizeof(arr[0]);
    int key =5;
    printf("%d",binarysearch(arr,len,key));
}
