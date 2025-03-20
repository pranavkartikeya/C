#include <stdio.h>
#include <stdlib.h>  // Required for exit()

int main() {
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char str[10];

    fp1 = fopen("pra.txt", "r");  // Open file in read mode
    fp2 = fopen("prv.txt","w");
    if (fp1 == NULL) {
        printf("ERROR");
        exit(1);
    }
    if (fp2 == NULL) {
        printf("ERROR");
        exit(1);
    }
    while(!feof(fp1)){

    fgets(str,10,fp1);
    fputs(str,fp2);
    }


    return 0;
}
