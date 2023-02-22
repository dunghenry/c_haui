#include <stdio.h>
#include <stdlib.h>
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
int timvtx(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
void sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((a[j] % 2 == 0 && a[i] % 2 != 0) || (a[j] % 2 == 0 && a[i] % 2 == 0 && a[i] > a[j]) || ((a[i] % 2 != 0) && (a[j] % 2 != 0) && (a[i] < a[j])))
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    int *a;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    do
    {
        if (n <= 1 || n >= 100)
        {
            printf("Nhap lai so phan tu cua mang: ");
            scanf("%d", &n);
        }
    } while (n <= 1 || n >= 100);
    a = (int *)malloc(n * sizeof(int));
    nhap(a, n);
    int x;
    printf("\nNhap x can tim kiem: ");
    scanf("%d", &x);
    int vt = timvtx(a, n, x);
    if (vt == -1)
    {
        printf("\nKo co gia tri nao trong mang bang x ");
    }
    else
    {
        printf("Vi tri dau tien bang vs gt x trong mang la: %d", vt);
    }
    sort(a, n);
    xuat(a, n);
    return 0;
}
