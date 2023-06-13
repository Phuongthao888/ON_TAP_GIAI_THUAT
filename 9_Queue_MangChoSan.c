/*Viết chương trình cài đặt hàng đợi bằng mảng. Nhập vào queue 6 phần tử { 41, 23, 4, 14, 56, 1 }. Sau đó thêm vào phần tử {55} và loại bỏ phần {23}. In hàng đợi sau khi thêm và bỏ. */

#include<stdio.h>
int queue[6], n = 6, front = - 1, rear = - 1;

void Them(int data) {
   if (rear == n - 1)
   printf("\nhang doi full khong the them %d vao hang doi \n ", data);
   else {
      if (front == - 1)
      front = 0;
      rear++;
      queue[rear] =data;
   }
}
void Xoa() {
   if (front == - 1 || front > rear) {
      printf("\nHang doi chua co phan tu nao, khong the xoa\n ");
   } 
   else {
      printf("\nda xoa phan tu dau tien cua queue ra khoi queue  ", queue[front]);
      front++;;
   }
}
void print() {
   if (front == - 1)
   printf("\nQueue rong \n");
   else {
      printf("\nCac phan tu trong queue la: ");
      for (int i = front; i <= rear; i++)
      printf(" %3d ", queue[i]);
   }
}
int main() {
	Them(41);
	Them(23);
	Them(4);
	Them(14);
	Them(56);
	Them(1);
	print();
	
	Them(55);
	print();
	
	Xoa();
	print();
   
}
