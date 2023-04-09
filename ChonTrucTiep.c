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
void chontructiep(int a[], int n){
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j = i+1; j<n; j++){
            if (a[j]<a[min]){ //tim ptu tiep theo nho hon
                min = j;
            }
        }
        int tam = a[i];
        a[i] = a[min];
        a[min] = tam;
    }
}
int main(){
  	int n;
  	int a[max];
  	n = nhapsonguyen();
  	
  	nhapmang(a,n);
 	xuatmang(a,n);
 	 
  	printf("\n sau khi sap xep chon truc tiep \n");
  	chontructiep(a,n);
  	xuatmang(a,n);
}
