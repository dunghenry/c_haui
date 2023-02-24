#include<stdio.h>
#include<stdlib.h>
void nhapmang(int *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", (a + i));
	}
}
void xuatmang(int *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d\t", *(a + i));
	}
}
int giatrilonthuhai(int *a, int n){
	int i;
	int firstMax, secondMax;
	if(*(a + 0) > *(a + 1)){
		firstMax = *(a + 0);
		secondMax = *(a + 1);
	}else{
		firstMax = *(a + 1);
		secondMax = *(a + 0);
	}
	for(i = 2; i < n; i++){
		if(*(a + i) >= firstMax){
			secondMax = firstMax;
			firstMax = *(a + i);
		}else if(*(a + i) > secondMax){
			secondMax = *(a + i);
		}
	}
	return secondMax;
}

void chenphantu(int *a, int *n, int vt, int gt){
	int i;
	++*n;
	realloc(a, *(n) * sizeof(int *));
	for(i = *n; i > vt; i--){
		*(a + i) = *(a + i - 1);
	}
	*(a + vt) = gt;
}
void chensauphantule(int *a, int *n, int k){
	int i;
	for(i = 0; i < *n; i++){
		if(*(a + i) % 2 != 0){
			chenphantu(a, n, i+1, k);
			break;
		}
	}
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n < 0 || n > 30){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n < 0 || n > 30);
	int *a = (int *)malloc(n * sizeof(int));
	nhapmang(a, n);
//	printf("\n%d", giatrilonthuhai(a, n));
	int k;
	printf("Nhap gia tri cua k: ");
	scanf("%d", &k);
	chensauphantule(a, &n, k);
	xuatmang(a, n);
	free(a);
	return 0;
}
