#include<stdio.h>
int main()
{
        FILE*fp=fopen("data.txt","r");
/*      if(fp!=NULL)
        printf("file exist\n");
        else
        printf("file not exist\n");*/
        char ch;
        while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);
}
