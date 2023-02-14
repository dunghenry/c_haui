#include <stdio.h>
void nhap(int *n, char c)
{
    printf("Nhap so %c : ", c);
    scanf("%d", n);
    do
    {
        if (*n <= 0)
        {
            printf("Nhap lai so %c : ", c);
            scanf("%d", n);
        }
    } while (*n <= 0);
}

int uscln(int a, int b)
{
    int min = a;
    int i;
    if (min > b)
    {
        min = b;
    }
    for (i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}
int bscnn(int a, int b)
{
    int max = a;
    int i;
    if (max < b)
    {
        max = b;
    }
    for (i = max; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}
int main(int argc, char const *argv[])
{
    int a, b;
    nhap(&a, 'a');
    nhap(&b, 'b');
    printf("Uoc so chung lon nhat cua %d va %d la: %d", a, b, uscln(a, b));
    printf("\nBoi so chung nho nhat cua %d va %d la: %d", a, b, bscnn(a, b));
    return 0;
}
