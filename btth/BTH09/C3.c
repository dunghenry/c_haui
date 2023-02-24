#include<stdio.h>
#include<stdlib.h>
void nhapmang(float *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%f", a + i);
	}	
}
void xuatmang(float *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%.2f\t", *(a + i));
	}
}

float tongbadentam(float *a, int n){
	int i;
	float sum = 0;
	for(i = 0; i < n; i++){
		if(*(a + i) >= 3 && *(a + i) <= 8){
			sum += *(a + i);
		}
	}
	return sum;
}
void chenphantu(float *a, int *n, int vt, float gt){
	int i;
	++*n;
	realloc(a, *n * sizeof(float *));
	for(i = *n; i > vt; i--){
		*(a + i) = *(a + i -1);
	}
	*(a + vt) = gt;
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n <= 5 || n >= 20){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n <= 5 || n >= 20);
	float *a = (float *)malloc(n * sizeof(float));
	nhapmang(a, n);
	printf("\nTong cac phan tu tu 3 den 8 la: %.2f", tongbadentam(a, n));
	float x;
	printf("Nhap so thuc x: ");
	scanf("%f", &x);
	chenphantu(a, &n , 0, x); 
	printf("Xuat mang: ");
	xuatmang(a, n);
	free(a);
	return 0;  
}
