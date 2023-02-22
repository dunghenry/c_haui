#include <stdio.h>
#include <stdlib.h>
void nhapmang(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", a + i);
    }
}
void xuatmang(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d \t", i, *(a + i));
    }
}
int lietketvatinhtong(int *a, int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) < 0)
        {
            printf("\nPhan tu am thu %d cua mang a[%d] = %d \t", i, i, *(a + i));
            sum += *(a + i);
        }
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int *a;
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    do
    {
        if (n <= 2 || n >= 30)
        {
            printf("Nhap lai so phan tu cua mang: ");
            scanf("%d", &n);
        }
    } while (n <= 2 || n >= 30);

    a = (int *)malloc(n * sizeof(int));
    nhapmang(a, n);
    printf("Xuat mang: ");
    xuatmang(a, n);
    int s = lietketvatinhtong(a, n);
    printf("\nTong cac phan tu am cua mang la: %d", s);
    return 0;
}
