#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void nhap(char *s)
{
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(s);
}
void xuat(char s[])
{
    puts(s);
    // printf("%s", s);
}
void demKiTu(char s[], int size)
{
    int i;
    int ktthuong = 0;
    int kthoa = 0;
    int so = 0;
    for (i = 0; i < size; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ktthuong++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            kthoa++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            so++;
        }
    }
    printf("So chu thuong la: %d\n", ktthuong);
    printf("So chu hoa la: %d\n", kthoa);
    printf("So chu so la: %d\n", so);
}
void xoakitu(char str[], int size, int vt)
{
    int i;
    for (i = vt; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }
    size--;
}
int demTu(char str[], int size)
{
}
void xoa(char str[], int size)
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            xoakitu(str, size, i);
        }
    }
}
int wordCount(char str[], int size)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < size - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
const char *reversString(char str[], int size)
{
    char data[size];
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        data[j] = str[i];
        j++;
    }
    // printf("%s", data);
    return data;
}

void display(char str[], int size)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            printf("\n");
            str[i] = '\0';
        }
        printf("%c", str[i]);
    }
}
int main(int argc, char const *argv[])
{
    char *s = (char *)malloc(100);
    nhap(s);
    int len = strlen(s);
    // demKiTu(s, len);
    // printf("Xuat chuoi vua nhap: ");
    // xoa(s, len);
    xuat(s);
    // printf("%d", wordCount(s, len));
    // reversString(s, len);
    display(s, len);
    return 0;
}
