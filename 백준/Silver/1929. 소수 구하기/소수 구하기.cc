#include <bits/stdc++.h>
using namespace std;
vector<int> isPrime(1e6 + 1, 1);

void init() {
  isPrime[0] = isPrime[1] = 0;
  for (int i = 2; i <= 1e6; i++) {
    for (int j = i + i; j <= 1e6; j += i) {
      isPrime[j] = 0;
    }
  }
}

int main() {
  init();

  int N, M;
  cin >> M >> N;

  for (int i = M; i <= N; i++) {
    if (isPrime[i]) cout << i << "\n";
  }
}
