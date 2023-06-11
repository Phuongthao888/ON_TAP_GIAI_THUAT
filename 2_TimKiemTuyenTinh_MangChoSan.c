/*Cho mảng gồm các phần tử { 44, 2, 3, 5, 10 } nhập vào từ bàn phím. Viết chương trình tìm kiếm giá trị 10. Sử dụng cài đặt tìm kiếm tuyến tính để tìm kiếm. */

#include<stdio.h>

int tktt(int a[], int n){
	int x = 10;
	for (int i = 0; i<n; i++){
		if(a[i]==x)
			return i;
	} return -1;
}
int main(){
	int n=5;
	int a[5]={44,2,3,5,10};
	int kq = tktt(a,n);
	if (kq!=-1)
		printf("x o vi tri %d", kq);
	else 
		printf("k tim thay");
return 0;
}
