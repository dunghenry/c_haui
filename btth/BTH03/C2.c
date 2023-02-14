#include <stdio.h>
void nhap(int *n, char c)
{
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", n);
    do
    {
        if (*n <= 0)
        {
            printf("Nhap lai so nguyen duong %c: ", c);
            scanf("%d", n);
        }

    } while (*n <= 0);
}
int giaithua(int n)
{
    int i;
    int s = 1;
    for (i = 1; i <= n; i++)
    {
        s *= i;
    }
    return s;
}
int tohop(int k, int n)
{
    int s = giaithua(n) / (giaithua(k) * giaithua(n - k));
    return s;
}
int main(int argc, char const *argv[])
{
    int k, n;
    nhap(&k, 'k');
    nhap(&n, 'n');
    printf("Giai thua cua %d la: %d\n", k, giaithua(k));
    printf("Top hop chap %d va %d la: %d", k, n, tohop(k, n));
    return 0;
}
