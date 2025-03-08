#include <stdio.h>

int binarysearch(int arr[],int n,int key,int start,int end){
    int mid = (start+end)/2;
    if(start<=end){
               if(arr[mid]<key) binarysearch(arr,n,key,mid+1,end);
               else if(arr[mid]>key) binarysearch(arr,n,key,start,mid-1);
               else return mid;

    }
    else{
return -1; }
}

int main() {

    int arr[]={1,2,3,4,5,6};
    int len= sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    printf("%d",binarysearch(arr,len,key,0,len-1));
}
