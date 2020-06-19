#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue(){
	front = -1;
	rear = -1;
	itemCount = 0;
	for(int i= 0; i< 5; i++){
		arr[i] = 0;
	}
}

bool Queue::isEmpty(){
	if(front == -1 && rear == -1)
		return true;
	else 
		return false;
}

bool Queue::isFull(){
	if((rear+1)%5 == front)
		return true;
	else
		return false;
}

void Queue::enqueue(int val){
	if(isFull()){
		cout << "Queue is full" << endl;
		return;
	}
	else if(isEmpty())
	{
		rear = 0;
		front = 0;
	}
	else
	{
		rear= (rear+1)%5;
	}
	itemCount++;
	arr[rear] = val;
}

int Queue::dequeue(){
	int x;
	if(isEmpty()){
		cout << "Queue is Empty" <<endl;
		return 0;
	}
	else if(front == rear)
	{
		x = arr[front];
		arr[front] = 0;
		rear = -1;
		front = -1;
		itemCount--;
		return x;
	}
	else
	{
		x = arr[front];
		arr[front] = 0;
		front = (front+1)%5;
		itemCount--;
		return x;
	}
}

int Queue::count()
{
	return itemCount;
}

void Queue::display()
{
	cout << "All values in the Queue are: " << endl;
	for(int i = 0; i < 5 ;i++){
		cout << arr[i] << " ";
	}
}
