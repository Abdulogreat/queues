#pragma once
#include<iostream>
using namespace std;
class queue {
private:
	int front;
	int rear;
	int arr[10];
	int capacity;
public:
	queue()
	{
		this->capacity = 10;
		front = -1;
		rear = -1;
	}
	int size()
	{
		return (rear + 1);
	}
	bool isEmpty()
	{
		if (front == -1 || front > rear)
		{
			return 1;
		}

		else
		{
			return 0;
		}
	}
	bool frnt(int& f)
	{
		if (isEmpty())
		{
			return 0;
		}
		f = arr[front];
		return 1;

	}
	void enqueue(int f)
	{
		if (rear == (capacity - 1))
		{
			cout << "Queue is full..." << endl;
			return;
		}
		arr[++rear] = f;
		if (rear == 0)
		{
			front = 0;
		}
	}
	void dequeue()
	{

		if (isEmpty())
		{
			return;
		}
		front++;

	}
	void print()
	{
		for (int i = front; i <= rear; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
