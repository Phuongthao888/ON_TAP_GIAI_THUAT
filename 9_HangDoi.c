//tham khảo Freetuts
/*Viết chương trình cài đặt hàng đợi bằng mảng. Nhập vào queue 6 phần tử { 41, 23, 4, 14, 56, 1 }. Sau đó thêm vào phần tử {55} và loại bỏ phần {23}. In hàng đợi sau khi thêm và bỏ.*/

#include<stdio.h>
int queue[100], n = 100, front = - 1, rear = - 1;

void Them() {
   int data;
   if (rear == n - 1)
   printf("hang doi full \n ");
   else {
      if (front == - 1)
      front = 0;
	  printf("Phan tu them vao: ");
	  scanf("%d", &data);
      rear++;
      queue[rear] =data;
   }
}
void Xoa() {
   if (front == - 1 || front > rear) {
      printf("Hang doi chua full, khong the xoa \n ");
   } 
   else {
      printf("da xoa:  ", queue[front]);
      front++;;
   }
}
void print() {
   if (front == - 1)
   printf("Queue rong \n");
   else {
      printf("Cac phan tu trong queue la: ");
      for (int i = front; i <= rear; i++)
      printf(" %d ", queue[i]);
   }
}
int main() {
   int menu;
   printf("1. Them vao queue \n");
   printf("2. Xoa khoi queue \n");
   printf("3. in queue \n");
   printf("0. Thoat \n");
   do {
      printf("lua chon: ");
      scanf("%d", &menu);
      switch (menu) {
         case 1: Them();
         	break;
         case 2: Xoa();
        	 break;
         case 3: print();
         	break;
         case 4: 
         printf("da thoat");
         	break;
         default: 
         	printf("Nhap sai lua chon !!!");
      }
   } while(menu!=0);

}
