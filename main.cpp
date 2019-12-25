//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 201800378.
//This is the main.cpp file.
//<----------(Linked list queue)---------->

#include <iostream>
#include <string>
//#include "queue.h"
#include "queue.cpp"

using namespace std;

#define intptr queue<int>*
#define intNova new queue<int>

#define charptr queue<char>*
#define charNova new queue<char>

//print() and printn() definitions are in the queue.cpp file.
int main(int argc, char** argv) {
	
	intptr num = intNova;
	int tr;
	char tx;
	
	num->enqueue(2);
	num->enqueue(0);
	num->enqueue(1);
	num->enqueue(9);
	num->enqueue(1);
	num->enqueue(2);
	
	cout<<num->pop()<<endl;
	cout<<"\n\n\n";
	while (!num->queueIsEmpty())
	{
		num->dequeue(tr);
		print(tr);
	}
	
	delete num;
	print("\n\n");
	
	charptr name = charNova;
	
	name->enqueue('M');
	name->enqueue('u');
	name->enqueue('s');
	name->enqueue('t');
	name->enqueue('a');
	name->enqueue('f');
	name->enqueue('a');
	
	printn(name->pop());
	printn("\n\n\n");
	
	name->enqueue('A');
	while (!name->queueIsEmpty())
	{
		name->dequeue(tx);
		print(tx);
		print(name->pop());
	}
	print("\n\n");
	
	queue<int> nums;
	queue<int> numsOdd;
	queue<int> numsEven;
	
	nums.enqueue(1);
	nums.enqueue(2);
	nums.enqueue(3);
	nums.enqueue(4);
	nums.enqueue(5);
	
	nums.Split(nums, numsOdd, numsEven);
	
	cout<<"Odd numbers: "<<endl;
	while (!numsOdd.queueIsEmpty())
	{
		numsOdd.dequeue(tr);
		print(tr);
	}
	
	cout<<"\n\nEven numbers: "<<endl;
	while (!numsEven.queueIsEmpty())
	{
		numsEven.dequeue(tr);
		print(tr);
	}
	
	cout<<"\n\nDequeuing the original queue: "<<endl;
	while (!nums.queueIsEmpty())
	{
		nums.dequeue(tr);
		print(tr);
	}
	return 0;
}
