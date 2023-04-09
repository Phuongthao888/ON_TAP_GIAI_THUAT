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

int TongTrongMang(int a[], int n){
	if(n==0)
	return 0;
	else{
		return a[n-1] + TongTrongMang(a,n-1);
		return TongTrongMang(a,n-1);
	}
		
}

int main() {
  	int n;
  	int a[max];
  	n = nhapsonguyen();
  	
  	nhapmang(a,n);
  	printf("\n mang sau khi nhap la: \n");
 	xuatmang(a,n);
  	
  	int kq = TongTrongMang(a,n);
  	printf("\nket qua tinh tong trong mang: %d", kq);
  return 0;
}
