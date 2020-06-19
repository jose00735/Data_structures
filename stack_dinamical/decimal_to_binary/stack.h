#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>

class Stack{
	private:
		typedef struct node{
			node * prev;
			int value;
			int index;
		} * nodePtr;
		nodePtr top;
		void changePrivate(int pos, int value, nodePtr top);
		int seek(int position, nodePtr top);
		void displayPrivate(nodePtr top);
	public:
		Stack();
		~Stack();
		void push(int val);
		bool isEmpty();
		int pop();
		int count();
		void change(int pos, int value);
		int operator[](int position);
		void display();
};
#endif
