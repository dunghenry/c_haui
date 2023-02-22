#include <stdio.h>
#include <stdlib.h>
void nhap(int *a, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Nhap phan tu a[%d][%d] = ", i, j);
            scanf("%d", (a + col * i + j));
        }
    }
}
void xuat(int *a, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", *(a + col * i + j));
        }
        printf("\n");
    }
}
int max(int *a, int row, int col)
{
    int i, j;
    int max = *(a + 0 * 0 + 0); // a[0][0]
    // printf("%d", *(a + 0 + 0));
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (*(a + col * i + j) > max)
            {
                max = *(a + col * i + j);
            }
        }
    }
    return max;
}
void timaxtungdong(int *a, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        int max = 0;
        for (j = 0; j < col; j++)
        {
            if (max < *(a + col * i + j))
            {
                max = *(a + col * i + j);
            }
        }
        printf("\n");
        printf("Max hang %d: %d\n", i + 1, max);
    }
}
int main(int argc, char const *argv[])
{
    int row, col;
    printf("Nhap n : ");
    scanf("%d", &row);
    printf("Nhap m : ");
    scanf("%d", &col);
    int *a = (int *)malloc(row * col * sizeof(int));
    nhap(a, row, col);
    printf("Xuat mang: \n");
    xuat(a, row, col);
    int rs = max(a, row, col);
    printf("Max = %d\n", rs);
    timaxtungdong(a, row, col);
    return 0;
}
