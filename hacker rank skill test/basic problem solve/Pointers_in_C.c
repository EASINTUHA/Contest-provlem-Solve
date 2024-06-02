#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d\n",c);
    d=a-b;
    if(d<0)
    {
        d=-d;
        printf("%d\n",d);
    }
    else
    {
        printf("%d\n",d);
    }
}