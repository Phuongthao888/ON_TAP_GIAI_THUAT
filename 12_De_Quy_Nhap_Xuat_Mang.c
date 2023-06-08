/*12. Cho mảng 1 chiều các số nguyên. Viết hàm đệ quy xuất mảng */
#include<stdio.h>

void xuatmang(int a[], int n, int i=0){
		if(i == n)
			return;
			
		printf("%3d", a[i]);
		xuatmang(a,n, i+1);
}

int main(){
	int n=5;
	int a[5]={44,51,12,3,1};
	printf("mang la: \n");
	xuatmang(a,n);
}
