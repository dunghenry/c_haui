#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void timSoKiTu(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    printf("Do dai cua chuoi '%s' la: %d", s, i);
}
int main(int argc, char const *argv[])
{
    char *s = (char *)malloc(100);
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(s);
    printf("%s", s);
    printf("\n");
    puts(s);
    timSoKiTu(s);
    printf("\n");
    printf("So ki tu cua chuoi %s la: %d", s, strlen(s));
    return 0;
}
