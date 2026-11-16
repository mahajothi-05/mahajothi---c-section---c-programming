#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("prog33.c.txt","w");
    fprintf(fp,"hii im jothi");
    fclose(fp);
    printf("File created successfully");
    return 0;
        }
