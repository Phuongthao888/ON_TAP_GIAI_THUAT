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
