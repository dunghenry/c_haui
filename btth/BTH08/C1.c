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
void hienthisochan(int *a, int n){
	int i = 0;
	for(i = 0; i < n; i++){
		if(*(a + i) % 2 == 0 && *(a + i) > 0){
			printf("%d\t", *(a + i));
		}
	}
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

int phantuduongnhonhat(int *a, int n){
	int i = 0;
	int j;
	int min;
	for(j = 0; j < n; j++){
		if(*(a + j) > 0){
			min = *(a +j);
			break;
		}
	}
	for(i = 0; i < n; i++){
		if(*(a + i) > 0 && *(a + i) < min){
			min = *(a + i);
		}
	}
	return min;
}


int main(){
	int n;
	int *a;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n <= 0 || n >= 30){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n <= 0 || n >=30);
	a = (int *)malloc(n * sizeof(int));
	nhap(a, n);
	//sort(a, n);
	//printf("\nPhan tu chan duong trong mang: ");
	//hienthisochan(a, n);
	//printf("\nXuat mang: ");
	//xuat(a, n);
	printf("Phan tu duong nho nhat cua mang la: %d", phantuduongnhonhat(a,n));
	free(a);
	return 0;
}
