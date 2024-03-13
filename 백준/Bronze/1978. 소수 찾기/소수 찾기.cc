#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


bool is_prime_number(int x) {
    if (x == 1)
        return false;
    if (x == 2)
        return true;

    for (int i = 2; i < sqrt(x) + 1; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {

    int N; cin >> N;

    vector<int> numbers;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }

    int cnt = 0;

    for (auto num : numbers) {
        if (is_prime_number(num) == true)
            cnt++;
    }

    cout << cnt;

    return 0;
}