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

int DemDuong(int a[], int n){
	if(n==0)
	return 0;
	if(a[n-1]>0)
		return 1 + DemDuong(a,n-1);
		return DemDuong(a,n-1);
}
int KiemTraAm(int a[], int n){
	if(DemDuong(a,n) !=0 )
		return -1;
	else
		return 1;
		
	return KiemTraAm(a,n);
}
int main(){
	int n;
	int a[max];
	n=nhapsonguyen();
	nhapmang(a,n);
	printf("mang sau khi nhap la: \n");
	xuatmang(a,n);
  	int kq = KiemTraAm(a,n);
  	if(kq==1)
  		printf("\n Thoa man");
  	else 
  		printf("\n Khong thoa man");
  return 0;
}
