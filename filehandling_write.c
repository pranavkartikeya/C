#include<stdio.h>



int main()
{
    FILE *fp=NULL;
    fp=fopen("pra.txt","w");
    if(fp==NULL)
        {
        printf("no file");
        exit(1);
       }
    fputc('a',fp);
     fclose(fp);

}
