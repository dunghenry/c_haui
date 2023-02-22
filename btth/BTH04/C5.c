#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
        printf("a[%d] = %d\t", i, *(a + i));
    }
}
int timtrituyetdoimax(int *a, int n)
{
    int i;
    int max = abs(*(a + 0));
    int vt = 0;
    for (i = 1; i < n; i++)
    {
        if (abs(*(a + i)) > max)
        {
            max = abs(*(a + i));
            vt = i;
        }
    }
    return vt;
}
int timphantuledt(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ((*(a + i)) % 2 == 1)
        {
            return i;
        }
    }
    return -1;
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
    int vt = timtrituyetdoimax(a, n);
    printf("\nPhan tu co gia tri tuyet doi lon nhat trong mang la a[%d] = %d", vt, a[vt]);
    int vtledt = timphantuledt(a, n);
    if (vtledt == -1)
    {
        printf("\nMang khong co so le");
    }
    else
    {
        printf("\nPhan tu le dau tien trong mang la: a[%d] = %d", vtledt, a[vtledt]);
    }
    return 0;
}
