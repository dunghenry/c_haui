#include <stdio.h>
#include <stdlib.h>
void nhap(int *a, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Nhap a[%d][%d] = ", i, j);
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
int tongduongcheochinh(int *a, int row, int col)
{
    int i, j;
    int sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += *(a + col * i + j);
            }
        }
    }
    return sum;
}
void timmaxtungcot(int *a, int row, int col)
{
    int i;
    int index = 0;
    while (index < col)
    {
        int max = 0;
        for (i = 0; i < row; i++)
        {
            // printf("%d", i);
            // printf("%d", index);
            // i row
            // j = col
            // printf("%d", *(a + col * i + index));
            if (*(a + col * i + index) > max)
            {
                max = *(a + col * i + index);
            }
        }
        printf("\nMax la %d", max);
        index++;
    }
}
int main(int argc, char const *argv[])
{
    int *a;
    int row, col;
    printf("Nhap row: ");
    scanf("%d", &row);
    printf("Nhap col: ");
    scanf("%d", &col);
    a = (int *)malloc(row * col * sizeof(int));
    nhap(a, row, col);
    printf("Xuat mang: ");
    printf("\n");
    xuat(a, row, col);
    // printf("Tong cac phan tu tren duong cheo chinh la: %d", tongduongcheochinh(a, row, col));
    timmaxtungcot(a, row, col);
    return 0;
}
