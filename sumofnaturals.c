#include<stdio.h>
int add(int,int);
int main()
{
        int n,sum=0;
        printf("enter the number\n");
        scanf("%d",&n);
        add(n,sum);
}
int add(int n,int sum)
{
        if(n!=0)
        {
                sum=sum+n;
                n--;
                add(n,sum);
        }
        else
        printf("%d",sum);
}
