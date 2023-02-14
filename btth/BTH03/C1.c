#include <stdio.h>
void nhap(int *n, char c)
{
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", n);
    do
    {
        if (*n <= 0)
        {
            printf("Nhap lai so nguyen duong %c: ", c);
            scanf("%d", n);
        }

    } while (*n <= 0);
}
int tinhS(int n)
{
    int i;
    int s = 1;
    for (i = 1; i <= n; i++)
    {
        s *= i;
    }
    return s;
}
int main()
{
    int n, a, b, c;
    int sumABC;
    nhap(&n, 'n');
    printf("Gia tri cua %d! la: %d", n, tinhS(n));
    nhap(&a, 'a');
    nhap(&b, 'b');
    nhap(&c, 'c');
    sumABC = tinhS(a) + tinhS(b) + tinhS(c);
    printf("Gia tri cua %d! + %d! + %d! la: %d", a, b, c, sumABC);
    return 0;
}
