#include <iostream>
using namespace std;

void print(int i, int N) {
  if (i > N) {
    return;
  }
  cout << i << " ";
  print(i + 1, N);
}

int main() {
  int N;
  cin >> N;
  int i = 1;
  print(i, N);
}
