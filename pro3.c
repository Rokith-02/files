#include<stdio.h>
int main()
{
        FILE*fp=fopen("data.txt","a");
        if(fp==NULL)
                printf("file does not exist\n");
        else
                printf("file is exist\n");
        fputc('o',fp);
        fputc('k',fp);
        fputc('i',fp);
        fputc('t',fp);
        fputc('h',fp);
}
