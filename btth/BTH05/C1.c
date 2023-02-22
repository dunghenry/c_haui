#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhap(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu a[%d]: ", i);
        scanf("%d", a + i);
    }
}

void xuat(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d \t", *(a + i));
    }
}
int checksnt(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int tongsont(int a[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (checksnt(a[i]) == 1)
        {
            sum += a[i];
        }
    }
    return sum;
}
void inx(int a[], int n, int x)
{
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("Vi tri bang x la: %d \t", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu nao bang voi gia tri cua x");
    }
    else
    {
        printf("\nSo luong phan tu bang x la %d", count);
    }
}
int main(int argc, char const *argv[])
{
    int *a;
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    do
    {
        if (n <= 1 || n >= 40)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }
    } while (n <= 1 || n >= 40);
    a = (int *)malloc(n * sizeof(int));
    nhap(a, n);
    printf("Xuat mang: ");
    xuat(a, n);
    printf("\nTong cac so nguyen to cua mang la: %d", tongsont(a, n));
    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);
    do
    {
        if (x <= 0)
        {
            printf("\nNhap la x: ");
            scanf("%d", &x);
        }
    } while (x <= 0);
    inx(a, n, x);
    return 0;
}
