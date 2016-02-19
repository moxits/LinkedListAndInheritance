#include "Shape.h"
using namespace std;
#include <iostream>

struct ListNode
{
	Shape *info;
	ListNode *next;
	ListNode(Shape *s, ListNode * ll =NULL)
		:info(s), next(ll)
	{
	}
};

class Picture
{
ListNode * head;
public:
	Picture()
		: head(NULL)
	{
	}
	void enter(Shape *s)
	{
		
		head = new ListNode(s,head);
	}
	
	double totalArea()
	{
		double total = 0.0;
		for (ListNode * p = head; p != 0; p = p->next)
			total += p->info->area();
		return total;
	}
	
	void drawAll()
	{
		for (ListNode * p = head; p !=0; p = p->next)
			p->info->draw();
	}	

	~Picture()
	{
		ListNode * temp;
		for ( ListNode * p = head; p != '\0' ; )
		{
			temp = p;
			p = p->next;
			delete temp;
		}
	}
};
	
