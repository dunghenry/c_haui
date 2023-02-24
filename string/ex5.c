#include <stdio.h>
int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];
    fflush(stdin);
    gets(s1);
    int i = 0;
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("S1 = %s\n", s1);
    printf("S2 = %s\n", s2);
    return 0;
}
