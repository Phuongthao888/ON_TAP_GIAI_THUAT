/*Hãy khai báo cấu trúc dữ liệu của danh sách liên kết kép các số nguyên*/

struct node{
	int info;
	struct node *pNext;
	struct node *pPrev;
};
typedef struct node NODE;
struct list{
	NODE *pHead;
	NODE *pPrev;
};
typedef truct list LIST;
