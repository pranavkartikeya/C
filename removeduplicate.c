#include <stdio.h>
#include<stdlib.h>

int removeduplicate(int arr[],int n){

    if(n==0) return 0;

    int j=0;
    for(int i=1;i<n;i++)
    {
      if(arr[i] != arr[j])
            {
            arr[++j]=arr[i];
            }
    }
    return j+1;

}

int main() {

    int arr[]={1,2,2,3,4,4,5,6};
    int len= sizeof(arr)/sizeof(arr[0]);
    len = removeduplicate(arr,len);

    for(int i=0;i<len;i++)
        {
        printf("%d",arr[i]);


        }

    }


