#include <stdio.h>

// 1*1 + 2*2 + 3*3 + ... + n*n
//  int tinh(int n)
//  {
//      if (n == 1)
//      {
//          return 1;
//      }
//      return n * n + tinh(n - 1);
//  }

// 1 + 1/2 + 1/3 + ... + 1/n
//  float tinh(int n)
//  {
//      if (n == 0)
//      {
//          return 0;
//      }
//      return (float)1 / n + tinh(n - 1);
//  }

// 1/2 + 1/4 + ... + 1/2n
float tinh(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (float)1 / (2 * n) + tinh(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float rs = tinh(n);
    printf("RS = %f\n", rs);
    return 0;
}
