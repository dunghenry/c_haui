#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void nhap(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", a + i);
    }
}
void xuat(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}
void xoaphantu(int *a, int *n, int vt)
{
    int i;
    for (i = vt; i < *n - 1; i++)
    {
        // a[i] = a[i + 1];
        *(a + i) = *(a + i + 1);
    }
    --*n;
    realloc(a, *n * sizeof(int *));
}
void xoaphantule(int *a, int *n)
{
    int i;
    for (i = 0; i < *n; i++)
    {
        if (*(a + i) % 2 != 0)
        {
            xoaphantu(a, n, i);
        }
    }
}
void chenphantu(int *a, int *n, int vt, int gt)
{
    int i;
    ++*n;
    realloc(a, *n * sizeof(int *));
    for (i = *n; i > vt; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + vt) = gt;
}
int main(int argc, char const *argv[])
{
    int n;
    int *a;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    do
    {
        if (n <= 5 || n >= 20)
        {
            printf("Nhap lai so phan tu cua mang: ");
            scanf("%d", &n);
        }
    } while (n <= 5 || n >= 20);
    a = (int *)malloc(n * sizeof(int));
    nhap(a, n);
    xoaphantule(a, &n);
    int vt;
    int gt;
    printf("\nNhap vi tri can chen: ");
    scanf("%d", &vt);
    do
    {
        if (vt < 0 || vt > n)
        {
            printf("\nNhap lai vi tri can chen: ");
            scanf("%d", &vt);
        }
    } while (vt < 0 || vt > n);
    printf("\nNhap gia tri can chen: ");
    scanf("%d", &gt);
    chenphantu(a, &n, vt, gt);
    xuat(a, n);
    // free(a);
    return 0;
}
