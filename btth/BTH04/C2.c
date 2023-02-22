#include <stdio.h>
void nhap(int *n)
{
    printf("Nhap so nguyen n: ");
    scanf("%d", n);
    do
    {
        if (*n <= 0)
        {
            printf("Nhap lai so nguyen n: ");
            scanf("%d", n);
        }
    } while (*n <= 0);
}
float tinhF(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return (float)1 / (n * (n + 1)) + (float)tinhF(n - 1);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    nhap(&n);
    printf("%.2f", tinhF(n));
    return 0;
}
