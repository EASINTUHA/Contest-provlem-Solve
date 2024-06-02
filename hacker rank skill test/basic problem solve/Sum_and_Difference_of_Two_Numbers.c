#include<stdio.h>
int main()
{
    int a,b,e,f;
    float c,d,g,h;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    e=a+b;
    f=a-b;
    printf("%d %d\n",e,f);
    g=c+d;
    h=c-d;
    printf("%0.1f %0.1f\n",g,h);
}