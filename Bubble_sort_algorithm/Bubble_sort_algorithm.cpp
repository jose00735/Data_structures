#include <iostream>

using namespace std;

void bubbleSort(int a[]){
  int i, j, tmp;
  for(i=0;i<5;i++){
    for(j=0;j<5-i-1;j++){
      if(a[j]>a[j+1]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
}

void print(int a[]){
  for(int i = 0;i<5;i++){
    cout << a[i] << " ";
  }
  cout << endl;

int main(){
  int  a[5] = {32,543,121,33,4};
  print(a);
  bubbleSort(a);
  print(a);
}
