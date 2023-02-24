#include<stdio.h>
void nhapmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d\t", a[i]);
	}
}

void xoa(int a[], int *n, int vt){
	int i;
	for(i = vt; i < *n - 1; i++){
		a[i] = a[i + 1];
	} 
	--*n;
}
void xoaphantuchan(int a[], int *n){
	int i;
	for(i = 0; i < *n; i++){
		if(a[i] % 2 == 0){
			xoa(a, n, i); 
		}
	}
}
void chenphantu(int a[], int *n, int vt, int gt){
	int i;
	++*n;
	for(i = *n; i > vt; i--){
		a[i] = a[i - 1];
	}
	a[vt] = gt;
}
 
void chenvaosauphantuam(int a[], int *n, int gt){
	int i;
	for(i = 0; i < *n; i++){
		if(a[i] < 0){
			chenphantu(a, n, i + 1, gt); 
		}
	}
}
void xoatatcaphantubangx(int a[], int *n, int x){
	int i;
	for(i = 0; i < *n; i++){
		while(a[i] == x){
			xoa(a, n, i); 
		}
	}
} 
int main(){
	int n;
	printf("Nhap n: ");
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n < 0 || n > 30){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n < 0 || n > 30);
	int a[n];
	nhapmang(a, n);
//	xoa(a, &n, 1); 
	//xoaphantuchan(a, &n);
	//chenvaosauphantuam(a, &n, 10);
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	xoatatcaphantubangx(a, &n, x); 
	xuatmang(a, n);
	return 0; 
}
