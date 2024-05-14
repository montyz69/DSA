#include <iostream>
using namespace std;

void sumofN(int N, int SUM) {
  if (N < 1) {
    cout << SUM;
    return;
  }
  sumofN(N - 1, SUM + N);
}

int main() {
  int N;
  cin >> N;
  sumofN(N, 0);
}
