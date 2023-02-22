#include <stdio.h>
#include <stdlib.h>
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
int tong(int a[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 11)
        {
            sum += a[i];
        }
    }
    return sum;
}
int tonguoc(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int sohoanhaolast(int a[], int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] == tonguoc(a[i]))
        {
            return i;
        }
    }
    return -1;
}
void sort(int a[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < 0 && a[j] < 0 && a[i] > a[j])
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
    int *a;
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    do
    {
        if (n <= 1 || n >= 50)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }
    } while (n <= 1 || n >= 50);
    a = (int *)malloc(n * sizeof(int));
    nhap(a, n);
    printf("Xuat mang: ");
    xuat(a, n);
    int rs = sohoanhaolast(a, n);
    if (rs == -1)
    {
        printf("\nKo co so hoan hao trong mang");
    }
    else
    {
        printf("\nVi tri cua so hoan hao cuoi cung trong mang la: %d", rs);
    }
    sort(a, n);
    printf("\nXuat mang: ");
    xuat(a, n);
    FILE *f;
    f = fopen("data.txt", "w");
    if (f == NULL)
    {
        exit(EXIT_FAILURE);
    }
    char text[] = "0";
    for (int i = 0; i < n; i++)
    {
        text[0] = a[i] + '0';
        fprintf(f, "%s\t", text);
    }
    fclose(f);
    return 0;
}
