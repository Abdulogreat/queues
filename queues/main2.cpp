#include "Q2.h"
int main()
{
	queue q;
	cout << "Size of Queue : " << q.size() << endl;
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(6);
	q.enqueue(8);
	q.enqueue(9);
	q.print();
	int n=0;
	bool c=q.frnt(n);
	cout << "Front is : " << n << endl;
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.print();
	
	return 0;
}