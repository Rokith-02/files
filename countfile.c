#include<stdio.h>
int main()
{
        FILE*fp=fopen("data.txt","r");
        if(fp!=NULL)
        printf("file is exist\n");
        int c=0,word=0,line=0;
        char ch;
        while((ch=fgetc(fp))!=EOF)
        {
                c++;
                if((ch==' ')||(ch=='\n'))
                word++;
                if(ch=='\n')
                line++;
        }
        printf("No:of:words:%d\n",c);
        printf("No:of:line:%d\n",line);
        printf("No:of:words:%d\n",word);
}
