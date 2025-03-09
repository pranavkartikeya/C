        #include <stdio.h>
        #include<stdlib.h>

        int removeoccurence(int arr[],int n,int key)

        {

            if(n==0) return 0;

            int j=0;
            for(int i=0;i<n;i++)
            {
              if(arr[i]!=key)
                    {
                    arr[j++]=arr[i];
                    }
            }
            return j;

        }

        int main() {

            int arr[]={1,2,3,4,5,6};
            int len= sizeof(arr)/sizeof(arr[0]);
            int key =3;
            len = removeoccurence(arr,len,key);

            for(int i=0;i<len;i++)
                {
                printf("%d",arr[i]);


                }

            }


