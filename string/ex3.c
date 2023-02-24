#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *s = (char *)malloc(100);
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(s);
    char c;
    printf("Nhap ki tu can tim kiem: ");
    scanf("%c", &c);
    int i = 0, count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            count++;
        }
        i++;
    }
    if (count > 0)
    {
        printf("Ky tu %c xuat hien %d lan trong chuoi '%s'", c, count, s);
    }
    else
    {
        printf("Ky tu %c khong co mat trong chuoi %s", c, s);
    }
    return 0;
}
