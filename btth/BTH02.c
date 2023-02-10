// #include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void baitap1()
{
    int n, i;
    int giaithua = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    do
    {
        if (n <= 0)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }

    } while (n <= 0);
    for (i = 1; i <= n; i++)
    {
        giaithua *= i;
    }
    printf("Giai thua cua %d la %d", n, giaithua);
}
void baitap2()
{
    int n, i;
    double kq = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    do
    {
        if (n <= 0)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }

    } while (n <= 0);
    if (n % 2 == 0)
    {
        kq += 1;
        for (i = 1; i <= n; i++)
        {
            kq += (double)1 / pow(2, i);
        }
    }
    else
    {
        kq += sqrt((n * n) + 1);
    }
    printf("Ket qua la: %.2f", kq);
}
void baitap3()
{
    double x;
    int n, i;
    float s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);
    do
    {
        if (n <= 0)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }

    } while (n <= 0);
    if (n % 2 == 0)
    {
        for (i = 1; i <= n; i++)
        {
            s += (float)pow(x, i) / pow(3, i - 1);
        }
    }
    printf("Ket qua la: %.2f", s);
}
void baitap4()
{
    int n;
    int du = 0;
    int sodaonguoc;
    printf("Nhap n: ");
    scanf("%d", &n);
    do
    {
        if (n <= 0)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }

    } while (n <= 0);
    while (n > 0)
    {
        du = n % 10;
        sodaonguoc = sodaonguoc * 10 + du;
        n /= 10;
    }
    printf("So dao nguoc la: %d", sodaonguoc);
}
int check(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void baitap5()
{
    int n, i;
    int count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    do
    {
        if (n <= 0)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }

    } while (n <= 0);
    printf("\nSo nguyen to nho hon %d la: ", n);
    for (i = 1; i < n; i++)
    {
        if (check(i) == 1)
        {
            printf("%d \t", i);
        }
    }
}
void baitap6()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sqrtn = (int)sqrt(n);
    do
    {
        if (n <= 0)
        {
            printf("Nhap lai n: ");
            scanf("%d", &n);
        }

    } while (n <= 0);
    if ((sqrtn * sqrtn) == n)
    {
        printf("%d la so chinh phuong", n);
    }
    else
    {
        printf("%d khong la so chinh phuong", n);
    }
}
int main(int argc, char const *argv[])
{
    while (1)
    {
        int luachon;
        printf("\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        do
        {
            if (luachon < 0 || luachon > 6)
            {
                printf("\nNhap lai lua chon cua ban: ");
                scanf("%d", &luachon);
            }

        } while (luachon < 0 || luachon > 6);
        switch (luachon)
        {
        case 1:
            baitap1();
            break;
        case 2:
            baitap2();
            break;
        case 3:
            baitap3();
            break;
        case 4:
            baitap4();
            break;
        case 5:
            baitap5();
            break;
        case 6:
            baitap6();
            break;
        case 0:
            printf("Ket thuc chuong trinh");
            exit(0);
        }
    }
    return 0;
}
