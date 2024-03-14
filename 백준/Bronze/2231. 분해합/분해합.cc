#include <iostream>
#include <vector>
using namespace std;

int splitNumber(int N) {
    vector<int> digit;

    while (N > 0) {
        digit.push_back(N % 10);
        N /= 10;
    }

    int sum = 0;
    for (int num : digit)
        sum += num;

    return sum;
}

int main() {

    int N, addnum = 0;
    cin >> N;

    for (int i = 1; i < N; i++) {
        int tmp = splitNumber(i);
        if (i + tmp == N) {
            addnum = i;
            cout << addnum;
            break;
            }
        }
    
    if (addnum == 0)
        cout << 0;

    return 0;
}