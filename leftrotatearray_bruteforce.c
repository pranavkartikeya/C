#include<stdio.h>
#include<string.h>

int arrayrotate(int arr1[],int n,int rot){
    int temp[rot];

     for(int i=0;i<rot;i++)
        {
          temp[i]=arr1[i];
        }
     for(int j=0;j< n-rot;j++)
        {
          arr1[j]=arr1[j+rot];
        }
    for (int k=n-rot;k<n;k++)
        {
          arr1[k]=temp[k-(n-rot)];
        }

    }
int main()
    {
    int arr1[]={1,2,3,4,5,6};
    int len= sizeof(arr1)/sizeof(arr1[0]);
    int rot=2;
    arrayrotate(arr1,len,rot);
    for(int i=0;i<len;i++)
        {
          printf("%d",arr1[i]);
        }
    }

