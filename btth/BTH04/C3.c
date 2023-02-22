#include <stdio.h>
#include <math.h>
void nhap(int *n, float *x)
{
    printf("Nhap so nguyen n: ");
    scanf("%d", n);
    printf("Nhap so thuc x: ");
    scanf("%f", x);
}
int giaithua(int n)
{
    int i;
    int gt = 1;
    for (i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}
float tinhF(int n, float x)
{
    // printf("n = %d \n", n);
    if (n == 0)
    {
        return (float)10;
    }
    else
    {
        return (float)(pow(x, 2 * n) / giaithua(2 * n)) + (float)tinhF(n - 1, x);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    float x;
    nhap(&n, &x);
    printf("%d %f\n", n, x);
    float s = tinhF(n, x);
    printf("Gia tri cua bieu thuc F(%d, %.2f) la: %.2f\n", n, x, s);
    return 0;
}
