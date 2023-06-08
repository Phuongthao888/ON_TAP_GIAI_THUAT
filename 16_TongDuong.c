/* 16. Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị dương có trong mảng */
#include<stdio.h>

float TongDuong(float a[], int n){
	if(n==0)
	return 0;
	if(a[n-1]>0)
		return a[n-1] + TongDuong(a,n-1);
		return TongDuong(a,n-1);
}

int main() {
  	int n=5;
  	float a[5]={1.1,1.2,-3.14,-2,-5};
  	float kq = TongDuong(a,n);
  	printf("Ket qua tinh tong so duong trong mang: %f", kq);
  return 0;
}

