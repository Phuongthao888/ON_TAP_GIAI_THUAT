/*Cho mảng gồm các phần tử { 44, 2, 3, 4, 10 } nhập vào từ bàn phím. Viết chương trình tìm kiếm giá trị 10. Sử dụng cài đặt tìm kiếm nhị phân để tìm kiếm. */

#include<stdio.h>

int tknp(int a[], int l, int r){
	if(r>=l){
		int i = (l+r)/2;
		int x=10;
		if(a[i]==x)
			return i;
		if (a[i]>x)
			return tknp(a,l,i-1);
		else 
			return tknp(a,i+1, r);
	} return -1;
}
int main(){
	int n=5;
	int a[5]={44,2,3,4,10};
	int l=0; int r=n-1;
	int kq = tknp(a,l,r);
	if(kq!=-1)
		printf("x ovi tri %d", kq);
	else 
		printf("k tim thay");
return 0;
}
