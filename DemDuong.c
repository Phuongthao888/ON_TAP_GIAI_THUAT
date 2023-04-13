/*mang mot chieu so nguyen, dem so nguyen duong torng mang*/
#include<stdio.h>

int demduong(int a[], int n){
	if(n==0)
		return 0;
	else{
		if(a[n-1]>0)
		return 1 + demduong(a,n-1);
		return demduong(a,n-1);
	}
}
int main(){
	int n=5;
	int a[]= {44,-1,2,-3,50};
	
	int kq = demduong(a,n);
		printf("ket qua co %d so duong", kq);
return 0;
}
