#include <stdio.h>

float avg(int arr[],int n){
    if (n==1){
        return arr[0];
    }
    return (arr[n-1]+(n-1)*avg(arr,n-1))/n; // sum is retrieved from the previous n-1 elements using (n-1)*avg(arr,n-1);
}

int main() {

    int arr[]={1,2,3,4,5,6};
    int len= sizeof(arr)/sizeof(arr[0]);
    printf("%f",avg(arr,len));
}
