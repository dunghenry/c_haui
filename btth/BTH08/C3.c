#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
void nhap(float *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%f", a + i);
	}
}
void xuat(float *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%.2f\t", *(a + i));
	}
}
bool checkarr(float *a, int n){
	int i;
	for(i = 0; i < n; i++){
		if(*(a + i) <= 6){
			return false;
		}
	}
	return true;
}
void xoa(float *a, int *n, int vt)
{
    int i;
    for (i = vt; i < *n - 1; i++)
    {
    	*(a + i) = *(a + i + 1);
    }
    *(n) -=1;
    realloc(a, *(n) * sizeof(float *));
}
void xoacacphantumang(float *a, int *n, float x){
	int i;
	for(i = 0; i < *n; i++){
		while(*(a + i) == x){
			xoa(a, n, i);
		}
		
	}
}
int main(){
	int n;
	float *a;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n < 1 || n > 30){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n < 1 || n > 30);
	a = (float *)malloc(n * sizeof(float));
	nhap(a, n);

	//int rs = checkarr(a, n);
	//if(rs == 0){
		//printf("\nMang vua nhap ko hop le");
	//}
	//else{
		//printf("\nMang vua nhap hop le");
	//}
	float x;
	printf("Nhap gia tri can xoa: ");
	scanf("%f", &x);
	xoacacphantumang(a, &n, x);
	printf("Xuat mang: ");
	xuat(a, n);
	free(a);
	return 0;
}
