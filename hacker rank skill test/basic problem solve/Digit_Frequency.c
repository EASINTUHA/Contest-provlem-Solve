#include <stdio.h>
#include <string.h>
int main()
{
    char num[1001];
    int frequency[10]={0};
    scanf("%s", num);
    for (int i = 0; i < strlen(num); i++)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            frequency[num[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", frequency[i]);
    }
    return 0;
}
