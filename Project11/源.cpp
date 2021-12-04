#include "标头.h"
using namespace std;
//定义一个链表
struct list {
	int num;
	struct list* next;
};
void outPrint(list* head);

int main() {
	list *head=0;
	head = new list;
	head->num = 15;//第一个链表保存15
	list* second = 0;
	second = new list;
	head->next = second;
	second->num = 20;//第二个链表保存20
	list* end = 0;
	second->next = end;
	//second->next = head;//循环链表
	//在第一个链表和第二个链表之间加入一个链表，并保存数字17
	list* mid = 0;
	mid = new list;
	mid->next = head->next;
	head->next = mid;
	mid->num = 17;
	
	outPrint(head);



}
//打印链表中的数据
void outPrint(list* head) {
	list* z;
	z = head;
	int j = 100;
	while(j!=0){
		cout << z->num<<endl;
		z = z->next;
		j--;
	}

}
