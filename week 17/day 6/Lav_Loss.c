#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double price=(a/(1-b/100.0))*(1+c/100.0);
    printf("%.2f\n", price);
    return 0;
}
