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

int search(int a[], int n)
{
  int x;
  printf("\nnhap x: ");
  scanf("%d",&x);
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == x)
      // Trả về i khi tìm thấy
      return i;
  // Nếu không tìm thấy trả về -1. 
  return -1;
}

int main() {
  	int n;
  	int a[max];
  	n = nhapsonguyen();
  	
  	nhapmang(a,n);
 	  xuatmang(a,n);
 	 
  	int kq = search(a, n);
 	if (kq != -1) {
    printf(" xuat hien tai chi so %d", kq);
  } else {
    printf(" khong co trong mang", kq);
  }
  return 0;
}
