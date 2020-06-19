#include <iostream>
#include "stack.h"
#include <sstream>

using namespace std;

int main(){
	Stack stack;
	int num = 0;
	string binary;
	stringstream ss;
	while(num != 666){
		cout << "Introduce Number : ";
		cin >> num;
		while(num != 0){
			stack.push(num%2);
			num /= 2;
		}
		while(not stack.isEmpty()){
			ss << stack.pop();
		}
		binary = ss.str();
		cout << binary << endl;
		ss.str("");
	}
	return 0;
}
