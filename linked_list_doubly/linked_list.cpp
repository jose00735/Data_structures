#include <iostream>
#include "linked_list.h"

using namespace std;

LinkedList::LinkedList(){
	head = NULL;
	tail = NULL;
}

void LinkedList::append(int value){
	nodePtr n = new node;
	nodePtr curr = new node;
	n ->value=value;
	if(head == NULL){
		n->next = NULL;
		n->prev = NULL;
		n->index = 0;
		head = n;
		tail = n;
		ValuesAmount = 1;
	}
	else
	{
		nodePtr curr = new node;
		curr = head;
		while(curr->next != NULL){
			curr = curr -> next;
		}
		n -> next = NULL;
		n -> prev = curr;
		n->index = n->prev->index + 1;
		curr -> next = n;
		ValuesAmount++;
	}
}

void LinkedList::prepend(int value){
	nodePtr n = new node;
	n -> value = value;
	if(head == NULL){
		n -> index = 0;
		n->next = NULL;
		n->prev = NULL;
		head = n;
		tail = n;
	}
	else
	{
		nodePtr curr = new node;
		curr = head;
		while(curr -> prev != NULL){
			curr = curr -> prev;
		}
		n -> prev = NULL;
		n -> next = curr;
		curr -> prev = n;
		tail = n;
		ValuesAmount++;
		updateIndex();
	}
}

void LinkedList::print(){
	nodePtr n = new node;
	n = tail;
	while(n != NULL){
		cout << "(" << n->value <<","<<n->index<< ")<-->";
		n=n->next;
	}
	cout << endl;
}

void LinkedList::updateIndex(){
	nodePtr n = new node;
	n = tail;
	while(n != NULL){
		if(n->prev == NULL)
			n->index = 0;
		else
			n->index = n->prev->index + 1;
		n=n->next;
	}
}

void LinkedList::insert(int pos, int value){
	if(head == NULL){
		if(pos == 0){
			append(value);
		}
		else
		{
			cout << "empty list" << endl;
		}
	}
	else if(pos > ValuesAmount - 1)
	{
		cout << "Position Error";
	}
	else if(pos == 0){
		prepend(value);
	}
	else if(pos == ValuesAmount - 1){
		append(value);
	}
	else
	{
		nodePtr n1 = new node;
		nodePtr n2 = new node;
		n1 = tail;
		while(n1->index != pos )
		{
			n1=n1->next;
		}
		n2 -> value = value;
		n1->prev->next =n2;
		n2 -> next = n1;
		n2 -> prev = n1 -> prev;
		n1 -> prev = n2;
		updateIndex();
	}
}

void LinkedList::deleteNode(int pos){
	if(head == NULL){
		cout << "Empty list" << endl;
	}
	else if(pos > ValuesAmount - 1)
	{
		cout << "Position Error";
	}
	else if(pos == 0){
		nodePtr del = new node;
		del = tail;
		tail = tail -> next;
		tail -> prev = NULL;
		delete del;
		updateIndex();
	}
	else if(pos == ValuesAmount - 1){
		nodePtr del = new node;
		del = head;
		while(del -> next != NULL){
			del = del -> next;
		}
		del -> prev -> next = NULL;
		delete del;
	}
	else
	{
		nodePtr del = new node;
		nodePtr	prev = new node;
		nodePtr next = new node;
		del = tail;
		while(del->index != pos){
			del = del -> next;
		}
		prev = del -> prev;
	 	next = del -> next;
		prev -> next = next;
		next -> prev = prev;
		delete del;
		updateIndex();
	}
}

void LinkedList::updateNode(int pos, int value){
	if(head == NULL){
		cout << "Empty list";
	}
	else if(pos > ValuesAmount - 1){
		cout << "Position Error";
	}
	else
	{
		nodePtr n = new node;
		n = tail;
		while(n->index != pos){
			n = n->next;
		}
		n -> value = value;
	}
}
