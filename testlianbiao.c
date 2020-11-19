#include "yuesefu.h"

int main() {
		LinkList *list = CreateList();
		Insert(list,1,10);
		Insert(list,1,20);
		Delete(list,2);
		Insert(list,1,30);
		Insert(list,1,40);
		printf("链表元素的个数：%d\n",Size(list));
		Print(list);
		printf("链表的第二个元素为：%d\n",GetData(list,2));



		#define n 11
		#define m 3

		yuesefu ();
}

