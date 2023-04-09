#include<stdio.h>
#define max 50
int nhapsonguyen(){
	int n;
	do{
		printf("nhap phan tu n: ");
		scanf("%d",&n);
	}while(n<0 || n>max);
return n;	
}

int nhapmang(int a[], int n){
	for(int i=0; i<n ; i++)
	{
		printf("nhap phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
		if(a[i]==0)
			return 0;
	}
}

int xuatmang(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%4d", a[i]);
}

void hoanvi(int &a, int &b){
    int tam = a;
    a = b;
    b = tam;
}
//Hàm sắp xếp Interchange Sort
void doichotructiep(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j])
                hoanvi(a[i], a[j]);
}

int main() {
  	int n;
  	int a[max];
  	n = nhapsonguyen();
  	
  	nhapmang(a,n);
 	  xuatmang(a,n);
 	  printf("\n mang sau khi doi cho \n");
  	doichotructiep(a,n);
  	xuatmang(a,n);
  return 0;
}
