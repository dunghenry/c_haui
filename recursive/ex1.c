#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int giaithua(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * giaithua(n - 1);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int rs = sum(n);
    int gt = giaithua(n);
    printf("Sum = %d\n", rs);
    printf("Giai thua = %d\n", gt);
    return 0;
}
