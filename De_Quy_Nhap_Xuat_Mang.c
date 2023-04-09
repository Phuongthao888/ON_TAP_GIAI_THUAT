#include<stdio.h>
#define max 100
int nhapsonguyen(){
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
	}while(n<0 ||n>max);
}
void nhapmang(int a[], int n, int i=0){
		if(i == n)
			return;

		printf("\n Nhap a[%d]= ", i);
		scanf("%d", &a[i]);
		nhapmang(a, n, i+1);
}
void xuatmang(int a[], int n, int i=0){
		if(i == n)
			return;
			
		printf("%3d", a[i]);
		xuatmang(a,n, i+1);
}

int main(){
	int n;
	int a[max];
	n = nhapsonguyen();
	nhapmang(a,n);
	printf("mang sau khi nhap la: \n");
	xuatmang(a,n);
}
