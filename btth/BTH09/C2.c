#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

void sapxep(float *a, int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(*(a + i) < *(a + j)){
				int tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j ) =  tmp;
			}
		}
	}
}
bool checkarr(float *a, int n){
	int i;
	for(i = 0; i < n; i++){
		if(*(a + i) <= 0 || (*(a + i) + *(a + i + 1)) <= 5){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n <= 5 || n >= 30){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n <= 5 || n >= 30);
	float *a = (float *)malloc(n * sizeof(float));
	nhapmang(a, n);
	//sapxep(a, n); 
	xuatmang(a, n);
	int rs = checkarr(a, n);
	if(rs == 0){
		printf("\nMang ko hop le");
	} else{
		printf("\nMang hop le");
	}
	return 0;  
}
