#include <stdio.h>

int main() {
    // Your code goes here
    int a,b,c;
    scanf("%d %d %d",&a ,&b,&c);
    if(a==b && a==c)
    {
        printf("Equilateral");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
}