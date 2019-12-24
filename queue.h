//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 201800378.
//This is the queue.h file.
//<----------(Linked list queue)---------->

#ifndef QUEUE_H
#define QUEUE_H


template <class D>
class queue
{
	typedef queue* ptr;
	
	private:
		
		D data;
		ptr front;
		ptr rear;
		ptr next;
		int count;
		
	public:
		
		queue();
		enqueue(const D &d);
		dequeue();
		bool queueIsEmpty() const;
		bool frontIsEmpty()const;
		D returnFront();
		int returnCount();
		D pop();
		Split(queue h, queue &h1, queue &h2);
		atFirst(ptr &p);
		Advance(ptr &p);
		bool atLast(ptr &p);
		D returnCur(ptr &p);
		bool returnPtrNull(ptr &p);
		
	protected:
};

#endif
