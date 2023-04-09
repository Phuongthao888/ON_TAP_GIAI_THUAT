//tham khảo v1Study
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
 
int tknhiphan(int a[], int l, int r) {
  if (r >= l) {
    int i = l + (r - l) / 2; 
    int x;
    printf("\nnhap x: ");
    scanf("%d",&x);
    // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
    if (a[i] == x)
      return i;
 
    //thực hiện tìm kiếm nửa trái của mảng
    if (a[i] > x)
      return tknhiphan(a, l, i - 1);
    else
    //thực hiện tìm kiếm nửa phải của mảng
    return tknhiphan(a, i + 1, r);
  }
 
  // Nếu không tìm thấy
  return -1;
}
int main(){
  	int n;
  	int a[max];
  	n = nhapsonguyen();
  	
  	nhapmang(a,n);
 	xuatmang(a,n);
 	 
  	int kq = tknhiphan(a,0,n-1);
 	if (kq != -1) {
    printf(" xuat hien tai chi so %d", kq);
  } else {
    printf(" khong co trong mang", kq);
  }
  return 0;
}
