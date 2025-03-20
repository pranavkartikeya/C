#include <stdio.h>
#include <stdlib.h>  // Required for exit()

int main() {
    FILE *fp = NULL;
    char ch;
    
    fp = fopen("pra.txt", "r");  // Open file in read mode

    if (fp == NULL) {
        printf("ERROR");
        exit(1);
    }

    int line_count = 1;  // Start counting from 1 assuming the file is not empty
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            line_count++;
        }
    }
    
    fclose(fp);
    printf("Number of lines: %d\n", line_count);

    return 0;
}
