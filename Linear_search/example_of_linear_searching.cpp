#include <iostream>

using namespace std;

void linearSearch(int a[], int n){
  int temp = -1;
  for(int i=0; i<5;i++){
    if(a[i] == n){
      cout << "Element found at location: "<< i << endl;
      temp = 0;
      break;
    }
  }
  if(temp == -1){
    cout << "Element not found" << endl;
  }
}

int main(){
  int arr[5] = {1,22,45,5,6};
  int num;
  cout << "please enter an element to search" << endl;
  cin >> num;
  linearSearch(arr, num);
}
