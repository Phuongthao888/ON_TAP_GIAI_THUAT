/*Cho mảng gồm các phần tử { 44, 1, 2, 9, 4 } nhập vào từ bàn phím. Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp chèn trực tiếp để sắp xếp */

#include<stdio.h>
void xuat(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%3d", a[i]);
}
void chen(int a[], int n){
	int i,j,key;
	for(i=1; i<n; i++){
		key = a[i];
		j=i-1;
		
		while(j>=0 && key<a[j]){
			a[j+1] = a[j];
			j=j-1;
		}
		a[j+1] = key;
	}
}
int main(){
	int n=5;
	int a[5]={44,1,2,9,4};
	chen(a,n);
	xuat(a,n);
	return 0;
}
