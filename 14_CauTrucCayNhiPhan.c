/*Hãy khai báo cấu trúc dữ liệu của cây nhị phân các số nguyên*/

struct node{
	int info;
	struct node *pNext;
	struct node *pPrev;
};
typedef truct node NODE;
typedef NODE *TREE;
