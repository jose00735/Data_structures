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
	}*nodePtr;
	nodePtr head;
	int countNodes;
	void printListPrivate(nodePtr Ptr);
	void updateIndex();
	public:
	LinkedList();
	void prependNode(int value);
	void appendNode(int value);
	void insertNode(int pos, int value);
	void deleteNode(int pos);
	void updateNode(int pos, int value);
	void printList();
	void printAmount();
	int operator [](int pos);
};

#endif 
