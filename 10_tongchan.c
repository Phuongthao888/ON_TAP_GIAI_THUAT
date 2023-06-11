/*10. Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy.*/

#include<stdio.h>
#include<math.h>

int tongchan(int a[], int n){
	if(n==0)
		return 0;
	if(a[n-1]%2==0)
		return a[n-1] + tongchan(a,n-1);
		return tongchan(a,n-1);
}
int main(){
	int n=5;
	int a[5] = {2,8,1,3,5};
	int kq = tongchan(a,n);
	printf("ket qua: %d", kq);
return 0;
}
