#include <iostream>
using namespace std;

void print(int N) {
  if (N == 0) {
    return;
  }
  cout << N << " ";
  print(N - 1);
}

int main() {
  int N;
  cin >> N;
  int i = 1;
  print(N);
}
