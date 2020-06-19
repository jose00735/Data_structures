#include <iostream>
#include "linked_list.h"

using namespace std;

int main(){
	LinkedList list;
	int option, value, pos;
	do{
		cout << "1) AppendNode" << endl;
		cout << "2) PrependNode" << endl;
		cout << "3) DeleteNode" << endl;
		cout << "4) UpdatedNode" << endl;
		cout << "5) PrintList" << endl;
		cout << "6) PrintAmount" << endl;
		cout << "7) PrintValue" << endl;
		cin >> option;
		switch(option){
			case 1:
				cout << "introduce value: " << endl;
				cin >> value;
				list.appendNode(value);
				break;
			case 2:
				cout << "introduce value: " << endl;
				cin >> value;
				list.prependNode(value);
				break;
			case 3:
				cout << "introduce position: " << endl;
				cin >> pos;
				list.deleteNode(pos);
				break;
			case 4:
				cout << "introduzca posicion: " << endl;
				cin>>pos;
				cout << "introduzca valor: " << endl;
				cin>>value;
				list.updateNode(pos, value);
				break;
			case 5:
				list.printList();
				break;
			case 6: 
				list.printAmount();
				break;
			case 7:
				cout << "introduzca posicion: " << endl;
				cin>>pos;
				cout << list[pos] << endl;
				break;
			default:
				break;
		}
	}while(option != 0);
	
}
