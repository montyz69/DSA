#include <iostream>
using namespace std;

int sumofN(int N) {
  if (N == 0) {
    return 0;
  }
  return N + sumofN(N-1);
}

int main() {
  int N;
  cin >> N;
  int ans = sumofN(N);
  cout<<ans;
}
