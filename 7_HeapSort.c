/*Viết chương trình cài đặt stack bằng mảng. Nhập vào stack 6 phần tử { 41, 23, 4, 14, 56, 1 }. Sau đó xuất giá trị top ra khỏi stack và in các phần tử trong stack còn lại.*/

#include<stdio.h>

void swap(int &a, int &b){
	int tg = a;
	a = b;
	b = tg;
}

void heapify(int a[], int n, int i){
	int left=2*i+1;
	int right=2*i+2;
	int largest=i;
	
	if(left<n && a[left]>a[largest]){
				largest=left;
	}
		
	if(right<n && a[right]>a[largest]){
				largest=right;
	}
	
		
	if(largest!=i){
		swap(a[i], a[largest]);
		heapify(a,n,largest);
	}
}
void heapsort(int a[], int n){
	for(int i=(n/2)-1; i>=0; i--){
				heapify(a,n,i);
	}
	for(int i=n-1; i>=0; i--){
		swap(a[i], a[0]);
		heapify(a,i,0);
	}
}
int main(){
	int n=10;
	int a[10]={1,4,7,8,5,2,3,6,9,10};
	heapsort(a,n);
	
	for(int i=0; i<n; i++){
		printf("%3d", a[i]);
	}
return 0;
}
