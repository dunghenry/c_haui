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
int tongptduongchiahetchoba(int *a, int n){
	int i;
	int sum = 0;
	for(i = 0; i < n; i++){
		if(*(a + i) > 0 && *(a + i) % 3 == 0){
			sum += *(a + i);
		}
	}
	return sum;
}
void chen(int *a, int *n, int vt, int gt){
	int i;
	++*(n);
    realloc(a, *(n) * sizeof(int *));
    for (i = *n; i > vt; i--)
    {
        *(a + i) = *(a + i -1);
    }
    *(a + vt) = gt;
    
}

void chensauphantuam(int *a, int *n, int x){
	int i;
	for(i = 0; i < *n; i++){
		if(*(a + i) < 0){
			chen(a, n, i + 1, x);
		}
	}
}
int main(){
	int n;
	int *a;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	do{
		if(n < 1 || n > 30){
			printf("Nhap lai so phan tu cua mang: ");
			scanf("%d", &n);
		}
	}while(n < 1 || n > 30);
	a = (int *)malloc(n * sizeof(int));
	nhap(a, n);
	
	//int rs = tongptduongchiahetchoba(a, n);
	//if(rs == 0){
		//printf("\nKo co phan tu duong nao chia het cho 3");
	//}else{
		//printf("\nTong cac phan tu duong chia het cho 3 la: %d", rs);
	//}
	int x;
	printf("Nhap gia tri x muon chen ");
	scanf("%d", &x);
	chensauphantuam(a, &n, x);
	printf("Xuat mang: ");
	xuat(a, n);
	free(a);
	return 0;
}
