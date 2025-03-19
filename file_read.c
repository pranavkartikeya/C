#include<stdio.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    fp=fopen("pranav.txt","r");
    char str[10];
    if(fp==NULL){

        printf("NO FILE");
        exit(1);

    }
    //using fgets
    //fgets(str,10,fp);
    //printf("%s",str);

    while(!feof(fp)){
     ch=fgetc(fp);
     printf("%c",ch);
    }
    fclose(fp);
}
