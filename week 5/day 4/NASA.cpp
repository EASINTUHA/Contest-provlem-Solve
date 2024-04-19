#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c=0,d=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>0)
        {
            c=b+c;
        }
        else
        {
            d=b+d;
        }
    }
    printf("%d %d\n",c,d);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
