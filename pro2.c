#include<stdio.h>
int main()
{
        FILE*fp=fopen("data.txt","w");
        if(fp==NULL)
        printf("file does not exist\n");
        else
        printf("file is exist\n");
        fputc('r',fp);
        }
