#include <iostream>
using namespace std;

void printname(int i,int n){
  if(i>n){
    return;
  }
  cout<<"Manthan"<<endl;
  printname(i+1,n);
}

int main() {
  int i=1;
  int n;
  cin>>n;
  printname(i,n);
}
