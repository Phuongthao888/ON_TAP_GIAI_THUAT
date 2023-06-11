#include<stdio.h>

void xuatmang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%4d", a[i]);
	}
}

void chontructiep(int a[], int n){
	for(int i=0; i<n; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(a[j]< a[min])
				min = j;
		}
		int tg = a[i];
		a[i] = a[min];
		a[min] = tg;
	}
}
int main(){
	int n= 5;
	int a[]= {44,10,5,1,2};
	
	chontructiep(a,n);
	xuatmang(a,n);
return 0;
}
