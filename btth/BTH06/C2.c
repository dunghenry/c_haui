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

int timvtduongdt(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) > 0)
        {
            return i;
        }
    }
    return -1;
}
bool ktmanghople(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int sum = *(a + i) + *(a + i + 1) + *(a + i + 2);
        if (*(a + i) >= 0 || sum == -100)
        {
            return false;
        }
    }
    return true;
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
    xuat(a, n);
    int vt = timvtduongdt(a, n);
    if (vt == -1)
    {
        printf("\nKhong co gia tri duong trong mang");
    }
    else
    {
        printf("\nVi tri phan tu duong dau tien trong mang la: %d", vt);
    }
    if (ktmanghople(a, n) == 0)
    {
        printf("\nMang khong hop le");
    }
    else
    {
        printf("\nMang hop le");
    }
    free(a);
    return 0;
}
