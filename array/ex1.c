#include <stdio.h>
#include <stdlib.h>
void nhap(int *a, int *n)
{
    int i;
    do
    {
        printf("Nhap n: ");
        scanf("%d", n);

    } while (*n <= 0 || *n > 10);
    for (i = 0; i < *n; i++)
    {
        printf("Nhap phan tu thu a[%d] = ", i);
        scanf("%d", a + i);
    }
}
void xuat(int *a, int n)
{
    printf("So phan tu cua mang la: %d ", n);
    printf("\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d \t", i, *(a + i));
    }
}
void sortIn(int *a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void sortDe(int *a, int n)
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

void xoa(int a[], int *n, int vt)
{
    for (int i = vt + 1; i <= (*n) - 1; i++)
    {
        a[i - 1] = a[i];
    }
    (*n)--;
    realloc(a, (*n) * sizeof(int *));
}
void them(int *a, int *n, int gt, int vt)
{
    int i;
    realloc(a, (*n + 1) * sizeof(int *));
    for (i = *n; i >= vt + 1; i--)
    {
        a[i] = a[i - 1];
    }
    (*n)++;
    a[vt] = gt;
}
int main(int argc, char const *argv[])
{
    int n;
    int *a = (int *)malloc(n * sizeof(int *));
    nhap(a, &n);
    // sortIn(a, n);
    // xoa(a, &n, 1);
    them(a, &n, 10, 1);
    xuat(a, n);
    free(a);
    return 0;
}
