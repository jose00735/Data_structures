#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		Queue();
		bool isEmpty();
		bool isFull();
		void enqueue(int val);
		int dequeue();
		int count();
		void display();
};
#endif 
