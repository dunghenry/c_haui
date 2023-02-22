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
// void xuat(int a[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }
// }
void xuat(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}
float tbc(int a[], int n)
{
    float sum = 0;
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 7)
        {
            sum += a[i];
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return (float)sum / count;
    }
}
void xoaphantu(int a[], int &n, int vt)
{
    int i;
    for (i = vt; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    realloc(a, (n) * sizeof(int *));
}

// void xoa(int a[], int *n, int vt)
// {
//     for (int i = vt; i < *(n)-1; i++)
//     {
//         a[i] = a[i + 1];
//     }
//     (*n)--;
//     realloc(a, (*n) * sizeof(int *));
// }

void xoaphantule(int a[], int &n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            xoaphantu(a, n, i);
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
        if (n <= 1 || n >= 50)
        {
            printf("Nhap lai so phan tu cua mang: ");
            scanf("%d", &n);
        }
    } while (n <= 1 || n >= 50);
    a = (int *)malloc(n * sizeof(int *));
    nhap(a, n);
    // xoa(a, &n, 1);
    // xoaphantu(a, n, 1);
    // printf("\n");
    printf("\nTrung binh cong cac phan tu lon hon bang 7: %.2f", tbc(a, n));
    xoaphantule(a, n);
    xuat(a, n);
    return 0;
}
