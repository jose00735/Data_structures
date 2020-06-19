#include <iostream>
#include "queue.h"

using namespace std;

int main(){
	Queue queue(20);
	int option, value;
	do
	{
		cout << "\nWhat operation do you want to perform?" << endl;
		cout << "1. inqueue()" <<endl;
		cout << "2. dequeue()" <<endl;
		cout << "3. isempty()" <<endl;
		cout << "4. isFull()" <<endl;
		cout << "5. count()" <<endl;
		cout << "6. display()" <<endl;
		cout << "7. clear screem()" <<endl;
		cin >> option;
		
		switch(option)
		{	
			case 0:
				break;
			case 1:
				cout << "enqueue operation\n enter an intem to inqueue the queue" << endl;
				cin>> value;
				queue.enqueue(value);
				break;
			case 2:
				cout << "dequeue operation\nDequeued value: " << queue.dequeue() << endl;
 				break;
			case 3:
				if(queue.isEmpty())
					cout << "Queue is empty" << endl;
				else
					cout << "Queue is not empty" << endl;
				break;
			case 4:
				if(queue.isFull())
					cout << "Queue is Full" << endl;
				else
					cout << "Queue is not Full" << endl;
				break;
			case 5:
				cout << "Count Operation\n count of items in Queue: " << queue.count() << endl;
				break;
			case 6:
				queue.display();
				break;
			case 7: 
				system("clear");
			default: 
				break;
		}
	}while(option!=0);
	return 0;
}

