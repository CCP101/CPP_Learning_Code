#include<iostream>
using namespace std;

struct List
{
	int num;
	List* next;
};

List* createList(int n)       
{
	List* head, * p, * q;
	q = head = NULL;   
	for (int i = n; i > 0; i--)
	{
		p = new List;    
		cin >> p->num;      
		if (head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
	q->next = NULL;
	return head;
}

List* ReverseList(List* head)          
{
	List* p, * r;       
	if (head->next == NULL)
		return head;
	p = head;          
	r = p->next;       
	p->next = NULL;   
	while (r)
	{
		p = r;
		r = r->next;
		p->next = head;   
		head = p;          
	}
	return head;
}

void print(List* head)        
{
	List* p;
	p = head;
	while (p)
	{
		cout << p->num;
		p = p->next;
		cout << " ";
	}
	cout << endl;
}

int main()
{
	List* p, * q;
	cout << "请输入链表的节点个数：";
	int n;
	cin >> n;
	p = createList(n);
	q = ReverseList(p);
	cout << endl;
	print(q);
	cout << endl;
	return 0;
}