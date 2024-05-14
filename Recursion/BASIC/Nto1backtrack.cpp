#include <iostream>
using namespace std;

void print(int i, int N) {
  if (N == 0) {
    return;
  }
  print(i + 1, N - 1);
  cout << i << " ";
}

int main() {
  int N;
  cin >> N;
  print(1, N);
}
