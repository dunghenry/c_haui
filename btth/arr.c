#include<stdio.h>
#include<stdlib.h>
void nhap(int *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", a + i);
	}
}
void xuat(int *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d\t", *(a + i));
	}
}
void changeN(int *n){
	*n +=1;
}
void sort(int *a, int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(*(a + i) > *(a + j)){
				int tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) =  tmp;
			}
		}
	}
}


void xoa(int *a, int *n, int vt)
{
    int i;
    for (i = vt; i < *n - 1; i++)
    {
    	*(a + i) = *(a + i) + 1;
    }
    *n -= 1;
    realloc(a, *(n) * sizeof(int *));
}

void chen(int *a, int *n, int vt, int gt){
	int i;
    for (i = *n; i > vt; i--)
    {
        *(a + i) = *(a + i -1);
    }
    *(a + vt) = gt;
    *n+=1;
    realloc(a, *(n) * sizeof(int *));
}

void xoaphantuchan(int *a, int *n){
	int i;
	for(i = 0; i < *n; i++){
		if(*(a + i) % 2 == 0){
			xoa(a, n, i);
		}
	}
}
int main(){
	int n;
	int *a;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n <= 2 || n >= 20){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n <= 2 || n >=20);
	//changeN(&n);
	a = (int *)malloc(n * sizeof(int));
	nhap(a, n);
//	int vt;
//	printf("Nhap vi tri can xoa: ");
//	scanf("%d", &vt);
//	do{
//		if(vt < 0 || vt >= n){
//			printf("Nhap lai vi tri can xoa: ");
//			scanf("%d", &vt);
//		}
//	}while(vt < 0 || vt >= n);
//	xoa(a, &n, vt);
	//chen(a, &n, 1, 10);
	xoaphantuchan(a, &n);
	printf("Xuat mang: ");
	xuat(a, n);
	free(a);
	return 0;
}
