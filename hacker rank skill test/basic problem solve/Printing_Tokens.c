#include <stdio.h>
int main()
{
    char word[100];
    while (scanf("%99s", word) != EOF)
    {
        printf("%s\n", word);
    }
    return 0;
}
