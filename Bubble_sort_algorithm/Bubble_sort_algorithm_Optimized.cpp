#include <iostream>

using namespace std;

void bubbleSort(int a[]){
  int i, j, tmp;
  bool flag;
  for(i=0;i<5;i++){
    flag = false;
    for(j=0;j<5-i-1;j++){
      if(a[j]>a[j+1]){
        flag=true;
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
    if(flag == false){
      break;
    }
  }
}

void print(int a[]){
  for(int i = 0;i<5;i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

int main(){
  int  a[5] = {32,543,1000,33,4};
  print(a);
  bubbleSort(a);
  print(a);
}
