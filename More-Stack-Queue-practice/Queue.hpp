#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <cstddef>
#include <iostream>


class Queue
{
private:
	class QueueNode
	{
		friend class Queue;
		int value; QueueNode *next;
		QueueNode(int valueIn, QueueNode *next1 = NULL)
		{
			value = valueIn;
			next = next1;
		}
	};
	QueueNode *front;
	QueueNode *back;

public:
	Queue();
	void addBack(int num1);
	void getFront();
	void removeFront();
	bool isEmpty();
	void clear();
};
#endif