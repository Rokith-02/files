#include<stdio.h>
int main()
{
        FILE*fp=fopen("data.txt","r");
        if(fp!=NULL)
        printf("file exist\n");
        char ch;
        FILE*fs=fopen("text.txt","w");
        while((ch=fgetc(fp))!=-1)
        fputc(ch,fs);
}
