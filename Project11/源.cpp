#include "��ͷ.h"
using namespace std;
//����һ������
struct list {
	int num;
	struct list* next;
};
void outPrint(list* head);

int main() {
	list *head=0;
	head = new list;
	head->num = 15;//��һ��������15
	list* second = 0;
	second = new list;
	head->next = second;
	second->num = 20;//�ڶ���������20
	list* end = 0;
	second->next = end;
	//second->next = head;//ѭ������
	//�ڵ�һ������͵ڶ�������֮�����һ����������������17
	list* mid = 0;
	mid = new list;
	mid->next = head->next;
	head->next = mid;
	mid->num = 17;
	
	outPrint(head);



}
//��ӡ�����е�����
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
