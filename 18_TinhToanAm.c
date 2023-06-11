/*Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy kiểm tra mảng có thỏa mảng tính chất “toàn giá trị âm” */

#include<stdio.h>
#include<math.h>

int demduong(float a[], int n){
	if(n==0)
		return 0;
	if(a[n-1]>0)
		return 1+demduong(a,n-1);
		return demduong(a,n-1);
}
int main(){
	int n=5;
	float a[5]={-1.1,-2.2,-3.14,-4.1,-5.2};
	int kq = demduong(a,n);
	if(kq==0)
		printf("Thoa man mang toan gia tri am");
	else
		printf("k thoa man, co so duong trong mang");
return 0;
}
