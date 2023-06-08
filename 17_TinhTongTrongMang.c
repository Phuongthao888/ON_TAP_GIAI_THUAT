/* 17.Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị có trong mảng. */

#include<stdio.h>

float TongTrongMang(float a[], int n){
	if(n==0)
	return 0;
	else{
		return a[n-1] + TongTrongMang(a,n-1);
		return TongTrongMang(a,n-1);
	}
		
}

int main() {
  	int n=3;
  	float a[3]={1.1,2.2,3.14};
  	float kq = TongTrongMang(a,n);
  	printf("Ket qua tinh tong trong mang: %f", kq);
  return 0;
}
