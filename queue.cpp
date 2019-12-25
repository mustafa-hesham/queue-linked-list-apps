//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 201800378.
//This is the queue.cpp file.
//<----------(Linked list queue)---------->

#include "queue.h"
#include <iostream>
#include <string>

using namespace std;

#define print(x) cout<<x
#define printn(x) cout<<x<<endl;

template <class D>
queue<D>::queue()
{
	front = NULL;
	rear = NULL;
	count = 0;
}

template <class D>
queue<D>::enqueue(const D &d)
{
	ptr temp = new queue();
	temp->data = d;
	if (queueIsEmpty())
	{
		front = temp;
		rear = temp;
		front->next = NULL;
	}
	else if (!queueIsEmpty())
	{
		rear->next = temp;
		rear = temp;
		rear->next == NULL;
	}
	count++;
}

template <class D>
bool queue<D>::queueIsEmpty() const
{
	return (count == 0);
}

template <class D>
bool queue<D>::frontIsEmpty() const
{
	return (front == NULL);
}

template <class D>
D queue<D>::returnFront()
{
	return front->data;
}

template <class D>
queue<D>::dequeue(D& d)
{
	if (queueIsEmpty())
	{
		printn("The queue is empty!")
		
	}
	else if (!queueIsEmpty())
	{
		ptr temp;
		temp = front;
		d = temp->data;
		front = front->next;
		delete temp;
	}
	
	count--;
}

template <class D>
int queue<D>::returnCount()
{
	return count;
}

template <class D>
D queue<D>::pop()
{
	D xt;
	ptr temp;
	temp = front;
	if (queueIsEmpty())
	{
		print("\n\n");
		printn("Queue is Empty!");
	}
	else
	{
		while (temp->next != rear && temp->next != NULL)
		{
			temp = temp->next;
		}
	
		xt = rear->data;
		rear = temp;
		temp = temp->next;
		rear->next = NULL;
		delete temp;
		count--;
		return xt;
	}
	
}

template<class D>
queue<D>::Split(queue h, queue &h1, queue &h2)
{
	ptr temp;
	h.atFirst(temp);
	
	while(!h.returnPtrNull(temp))
	{
		if (h.returnCur(temp) % 2 != 0)
		{	
			h1.enqueue(h.returnCur(temp));	
		}
		
		else
		{
			h2.enqueue(h.returnCur(temp));
		}

		h.Advance(temp);
	}

}

template<class D>
queue<D>::atFirst(ptr &p)
{
	p = front;
}

template<class D>
queue<D>::Advance(ptr &p)
{
	p = p->next;
}

template<class D>
D queue<D>::returnCur(ptr &p)
{
	return p->data;
}

template<class D>
bool queue<D>::returnPtrNull(ptr &p)
{
	return (p == NULL);
}

template <class D>
queue<D>::splitByValue(queue h, queue &h1, queue &h2)
{
	D xr;
	while (!h.queueIsEmpty())
	{
		h.dequeue(xr);
		if (xr % 2 != 0) 
		{
			h1.enqueue(xr);
		}
		else 
		{
			h2.enqueue(xr);
		}
	}
}
