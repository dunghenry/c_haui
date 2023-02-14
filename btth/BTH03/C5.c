#include <stdio.h>

void nhap(int *n, char c)
{
    printf("Nhap so %c : ", c);
    scanf("%d", n);
    do
    {
        if (*n <= 3)
        {
            printf("Nhap lai so %c : ", c);
            scanf("%d", n);
        }
    } while (*n <= 3);
}

int tich(int n)
{
    int i;
    int t = 1;
    if (n <= 0)
    {
        return 1;
    }
    for (i = 1; i <= n; i++)
    {
        t *= i;
    }
    return t;
}

int s(int n)
{
    int i;
    int sum = 0;
    if (n <= 0)
    {
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        sum += tich(i);
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int n, m;
    nhap(&n, 'n');
    nhap(&m, 'm');
    int gt = s(2 * n) + s(m);
    printf("S(2*n) + S(m) = %d", gt);
    return 0;
}
