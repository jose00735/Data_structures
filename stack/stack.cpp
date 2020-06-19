#include <iostream>
#include <string>

#include "stack.h"

using namespace std;

Stack::Stack(){
	top = -1;
	for(int index = 0; index < 5; index++){
		arr[index]=0;
	}
}

bool Stack::isEmpty(){
	if(top == -1){
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::isFull(){
	if(top==4){
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::push(int val){
		if(isFull()){
			cout << "stack overflow" << endl;
		}
		else
		{
			top++;
			arr[top] = val;
		}
}

int Stack::pop(){
	if(isEmpty()){
		cout << "stack underflow" << endl;
	}
	else
	{
		int popValue = arr[top];
		arr[top] = 0;
		top--;
		return popValue;
	}
}

int Stack::count()
{
	return(top+1);
}

int Stack::peek(int pos){
	if(isEmpty()){
		return 0;
	}
	else
	{
		return arr[pos];
	}
}

void Stack::change(int pos, int val){
	arr[pos] = val;
	cout << "value changed at location " << pos << endl;
}

void Stack::display(){
	cout << "all values in the stack are " << endl;
	for(int index = 4; index>=0; index--){
		cout << arr[index] <<endl;
	}
}




