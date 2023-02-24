#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // char s[100];
    char *s = (char *)malloc(100);
    char temp;
    int i, j;
    fflush(stdin);
    gets(s);
    int size = strlen(s);
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    puts(s);
    return 0;
}
