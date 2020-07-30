#include <iostream>
using namespace std;

class SequenList {
public:
	SequenList *head,*next;
	int number;
};

SequenList *bingji(SequenList *List_A, SequenList *List_B,SequenList *List_C)
{
	SequenList *A,*A_next,*B, *B_next, *C,*C_next ;
	A = List_A->head;
	A_next = A->next;
	B = List_B->head;
	B_next = B->next;
	C = List_C->head;
	C_next = C->next;
	while (A_next != NULL && B_next != NULL)
	{
		if (A->number == B->number)
		{
			SequenList *transmit = new SequenList;
			*transmit = *A;
			if (C->head == NULL)
			{
				C->head = transmit;
			}
			C->next = transmit;
			A = List_A->next;
			B = List_B->next;
		}
		else if (A->number < B->number)
		{
			SequenList *transmit = new SequenList;
			*transmit = *A;
			if (C->head == NULL)
			{
				C->head = transmit;
			}
			C->next = transmit;
			A = List_A->next;
		}
		else if (A->number > B->number)
		{
			SequenList *transmit = new SequenList;
			*transmit = *B;
			if (C->head == NULL)
			{
				C->head = transmit;
			}
			C->next = transmit;
			B = List_B->next;
		}
	}
	return 0;
}
