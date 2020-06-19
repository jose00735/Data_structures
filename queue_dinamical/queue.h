#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

using namespace std;

class Queue{
	private:
		typedef struct node{
			int value;
			int index;
			node * prev;
		}* nodePtr;
		
		nodePtr array;
		int front;
		int rear;
		int array_length;
		void change(int pos, int val, nodePtr n);
		int ReturnValue(int pos, nodePtr n);
		void displayPrivate(nodePtr n);
	public:
		Queue();
		Queue(int size);
		bool isEmpty();
		bool isFull();
		void enqueue(int val);
		int dequeue();
		int count();
		void display();
};
#endif 
