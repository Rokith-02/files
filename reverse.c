#include<stdio.h>
int rev(int,int);
int main()
{
        int n,sum=0;
        printf("enter the number\n");
        scanf("%d",&n);
        rev(n,sum);
}
int rev(int n,int sum)
{
        if(n!=0)
        {
                sum=sum*10+(n%10);
                n/=10;
                rev(n,sum);
        }
        else
        printf("%d",sum);
}
