#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    int flag=1;
    while(flag==1)
    {
        b=b+(a%10);
        a=a/10;
        if(a==0)
        {
            flag=0;
        }
    }
    printf("%d\n",b);
}