#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

class LinkedList{
	private:
		typedef struct node{
			int index;
			int value;
			node * next;
			node * prev;
		}*nodePtr;
		nodePtr head;
		nodePtr tail;
		int ValuesAmount;
		void updateIndex();
	public:
		LinkedList();
		void append(int value);
		void prepend(int value);
		void insert(int pos, int value);
		void deleteNode(int pos);
		void print();
		void updateNode(int pos, int value);
};
#endif
