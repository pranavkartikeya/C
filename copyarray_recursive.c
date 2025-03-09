#include<stdio.h>
#include<string.h>

int arraycopy(int arr1[],int arr2[],int n)
            {

              if(n>0) {
                    arr2[n-1]=arr1[n-1];
              arraycopy(arr1,arr2,n-1);


            }
            
            else { return 0;
                 }
            }
int main()
    {
    int arr1[]={1,4,5,6};
    int len= sizeof(arr1)/sizeof(arr1[0]);
    int arr2[len];
    arraycopy(arr1,arr2,len);
    for(int i=0;i<len;i++)
        {
          printf("%d",arr2[i]);
        }
    }

