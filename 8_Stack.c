/*Viết chương trình cài đặt stack bằng mảng. Nhập vào stack 6 phần tử { 41, 23, 4, 14, 56, 1 }. Sau đó xuất giá trị top ra khỏi stack và in các phần tử trong stack còn lại.*/

#include<stdio.h>

int top=-1;

void xuat(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%3d", a[i]);
}

bool isfull(int n){
	if(top>=n-1)
		return true;
	else
		return false;
}
bool isempty(){
	if(top==-1)
		return true;
	else
		return false;
}
void push(int a[], int n, int data){
	if(isfull(n)==true)
		printf("\n ngan xep day khong the them %d vao ngan xep!!! \n", data);
	else{
		++top;
		a[top]=data;
		printf("\n Da them %d vao ngan xep!!!", data);
	}
}
void pop(){
	if(isempty()==true)
		printf("\n ngan xep rong, khong co gi de xoa!!! \n");
	else{
		--top;
		printf("\n da xoa 1 phan tu ra khoi ngan xep!!! \n");
	}
}
int Top(int a[]){
	return a[top];
}
int size(){
	return top + 1;
}
int main(){
	int top = -1;
	int n = 6;
	int a[n];
	push(a,n,41);
	push(a,n,23);
	push(a,n,4);
	push(a,n,14);
	push(a,n,56);
	push(a,n,1);
	
	push(a,n,55);
	printf("\n hien co %d trong ngan xep ! \n", size());

	pop();
	
	push(a,n,55);
	pop();
	printf("\n hien co %d trong ngan xep ! \n", size());
	
}
