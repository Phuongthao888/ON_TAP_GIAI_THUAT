#include<stdio.h>

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
  	int n=5;
  	int a[]={5,8,6,1,2};
  	
 	xuatmang(a,n);
 	printf("\n mang sau khi doi cho \n");
  	doichotructiep(a,n);
  	xuatmang(a,n);
  return 0;
}
