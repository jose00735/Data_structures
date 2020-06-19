#include <iostream>
#include "queue.h"

using namespace std;


Queue::Queue(){
	array_length = 4;
	array = NULL;
	rear = -1;
	front = -1;
}

Queue::Queue(int size){
	array_length = size;
	array = NULL;
	rear = -1;
	front = -1;
}

bool Queue::isEmpty(){
	if(rear == -1 && front == -1){
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::isFull(){
	if(rear == array_length){
		return true;
	}
	else
	{
		return false;
	}
}

void Queue::enqueue(int val){
	nodePtr n = new node;
	n->value = val;
	if(isEmpty()){
		front = 0;
		rear = 0;
		array = n;
		array -> prev = NULL;
		array -> index = rear;
	}
	else if(isFull()){
		cout << "Queue is full" <<endl;
		return;
	}
	else 
	{
		rear++;
		n -> index = rear;
		n -> index = array->index + 1;
		n -> prev = array;
		array = n;
	}
}

int Queue::dequeue(){
	int x;
	if(isEmpty()){
		cout << "Queue is Empty" << endl;
		return 0;
	}
	else if(front == rear){
		x = ReturnValue(front, array);
		change(front, 0, array);
		rear = -1;
		front = -1;
		return x;
	}
	else
	{
		x = ReturnValue(front, array);
		change(front, 0, array);
		front++;
		return x;
	}
}

int Queue::ReturnValue(int pos, nodePtr n){
	while(n->index != pos)
	{
		n = n->prev;
	}
	return n->value;
}

void Queue::change(int pos, int value, nodePtr array){
	while(array->index != pos){
		array = array -> prev;
	}
	array -> value = value;
}

void Queue::display(){
	displayPrivate(array);
}

void Queue::displayPrivate(nodePtr n){
	for(int i = 0; i < front; i++){
		cout << "0 ";
	}
	for(int i = 0; i < rear + 1; i++){
		cout << n->value << " ";
		n = n->prev;
	}
	for(int i = 0; i < array_length + front - rear; i++){
		cout << "0 ";
	}
	cout << endl;
}

int Queue::count(){
	return (rear - front + 1);
}
