#include <stdio.h>
#include <stdlib.h>
void nhap(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu a[%d] = ", i);
        scanf("%d", (a + i));
    }
}
void xuat(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d \t", i, *(a + i));
    }
}
void sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void xoa(int *a, int &n, int vt)
{
    int i;
    for (i = vt; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    realloc(a, (n) * sizeof(int *));
}
void them(int a[], int &n, int gt, int vt)
{
    int i;
    for (i = n; i > vt; i--)
    {
        a[i] = a[i - 1];
    }
    a[vt] = gt;
    n++;
    realloc(a, (n) * sizeof(int *));
}
int main(int argc, char const *argv[])
{
    int n;
    int *a;
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
    nhap(a, n);
    xuat(a, n);
    printf("\n");
    // sort(a, n);
    // xoa(a, n, 3);
    them(a, n, 100, 1);
    xuat(a, n);
    free(a);
    return 0;
}
