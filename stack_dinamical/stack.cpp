#include <iostream>
#include <string>

#include "stack.h"

using namespace std;

Stack::Stack(){
	top = NULL;
}

void Stack::push(int val){
	nodePtr n = new node;
	n -> value = val;
	if (top == NULL){
		top = n;
		top -> prev = NULL;
		top -> index = 0;
	}
	else{
		n->index = top-> index + 1;
		n->prev = top;
		top = n;
	}
}

bool Stack::isEmpty(){
	if(top == NULL){
		return true;
	}
	else
	{
		return false;
	}
}

int Stack::pop(){
	int value;
	if(top != NULL){
		nodePtr delPtr = top;
		value = top -> value;
		top = top -> prev;
		delPtr -> prev = NULL;
		delete delPtr;
		return value;
	}
	else
	{
		cout << "nothing in the stack" << endl;
		return 0;
	}
}

int Stack::count(){
	return top -> index;
}

void Stack::change(int pos, int value){
	changePrivate(pos, value, top);
}

void Stack::changePrivate(int pos, int value, nodePtr top){
	if(top != NULL && top->index > pos){
		while(top->index != pos){
			top = top->prev;
		}
		top -> value = value;
	}
	else
	{
		cout << "Stack is empty or position is wrong";
	}
}

int Stack::operator[](int position){
	return seek(position, top);
}

int Stack::seek(int position, nodePtr top){
	while(top->index != position){
		top = top->prev;
	}
	return top->value;
}

void Stack::display(){
	displayPrivate(top);
}

void Stack::displayPrivate(nodePtr top){
	int size = top -> index + 1;
	int index = 0;
	while(size != index){
		cout << top->value << " ";
		top = top -> prev;
		index++;
	}
	cout << endl;
}

Stack::~Stack(){
	int index;
	while(index != top -> index){
		pop();
	}
}


