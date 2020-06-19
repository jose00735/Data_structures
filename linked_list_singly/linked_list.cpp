#include <iostream>
#include "linked_list.h"

using namespace std;

LinkedList::LinkedList(){
	head = NULL;
}

void LinkedList::appendNode(int value){
	nodePtr n = new node;
	nodePtr curr = new node;
	n->next = NULL;
	n->value = value;
	if(head == NULL){
		n->index = 0;
		head = n;
		countNodes = 1;
	}
	else
	{
		curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		n -> index = curr -> index + 1;
		curr -> next = n;
		countNodes+=1;
	}
}

void LinkedList::printList(){
	printListPrivate(head);
}

void LinkedList::printListPrivate(nodePtr Ptr){
	while(Ptr != NULL){
		cout << "value index " << Ptr -> index << " is: " <<  Ptr->value << endl;
		Ptr= Ptr->next;
	}
	cout << "Amount of nodes: " << countNodes << endl;
}

void LinkedList::printAmount(){
	cout << "Amount of nodes: " << countNodes << endl;
}

void LinkedList::prependNode(int value){
	if(head == NULL){
		appendNode(value);
	}
	else
	{
		nodePtr n = new node;
		n -> value = value;
		n -> next = head;
		n -> index = 0;
		head = n;
		updateIndex();
		countNodes+=1;
	}
}

void LinkedList::updateIndex(){
	nodePtr curr = new node;
	curr = head;
	curr->index = 0;
	while(curr->next != NULL){
		curr -> next -> index = curr -> index + 1;
		curr = curr -> next; 
	}
}

void LinkedList::insertNode(int pos, int value){
	if(head == NULL || countNodes - 1 == pos){
		appendNode(value);
	}
	else if(countNodes != 0 && pos == 0)
	{
		prependNode(value);
	}
	else if(pos > countNodes - 1){
		cout << "invalid position" << endl;
	}
	else
	{
		nodePtr n = new node;
		nodePtr Ptr = new node;
		Ptr = head;
		n -> value = value;
		while(Ptr->index != pos){
			Ptr = Ptr->next;
		}
		n-> next = Ptr -> next;
		Ptr -> next = n;
		updateIndex();
		countNodes++;
	}
}

void LinkedList::deleteNode(int pos){
	if(head == NULL){
		cout << "Empty list" << endl;
	}
	else if(pos > countNodes - 1){
		cout << "Wrong position" << endl;
	}
	else
	{
		nodePtr delPtr = new node;
		delPtr = head;
		if(delPtr->index == pos){
			head = head ->next;
			delete delPtr;
		}
		else
		{
			nodePtr delPtr2 = new node;
			while(delPtr->next->index != pos){
				delPtr = delPtr->next;
			}
			delPtr2 = delPtr->next;
			if(delPtr -> next -> next != NULL){
				delPtr -> next = delPtr->next->next;
			}
			delete delPtr2;
		}
		countNodes--;
		updateIndex();
	}
}

void LinkedList::updateNode(int pos, int value){
	if(head == NULL){
		cout << "empty list" << endl;
	}
	else if(pos > countNodes - 1){
		cout << "posicion incorrecta" << endl;
	}
	else
	{
		nodePtr n = new node;
		n = head;
		while(n->index != pos){
			n = n->next;
		}
		n -> value = value;
	}
}

int LinkedList::operator [](int pos){
	if(head == NULL){
		cout << "empty list" << endl;
		return 0;
	}
	else if(pos > countNodes - 1){
		cout << "posicion incorrecta" << endl;
		return 0;
	}
	else
	{
		nodePtr n = new node;
		n = head;
		while(n->index != pos){
			n = n->next;
		}
		return n->value;
	}
}
