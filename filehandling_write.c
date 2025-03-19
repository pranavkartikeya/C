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

#include<stdio.h>

int main()
{
    FILE *fp = NULL;

    fp=fopen("pranav.txt","w");

    fprintf(fp,"%s","amma");
     fclose(fp);


}


