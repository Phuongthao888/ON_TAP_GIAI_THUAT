/* 21. Tính T(n) = 1 x 2 x 3 x … x n. */

#include<stdio.h>
int giaithua(int n){
	if(n==1)
		return 1;
	else
		return n*giaithua(n-1);
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	int kq = giaithua(n);
	printf("ket qua: %d", kq);
return 0;
}
