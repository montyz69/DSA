#include <iostream>
using namespace std;

void print(int i, int N) {
  if (i < 1) {
    return;
  }
  print(i - 1, N);
  cout << i << " ";
}

int main() {
  int N;
  cin >> N;
  print(N, N);
}
