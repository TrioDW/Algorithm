#include <bits/stdc++.h>
using namespace std;

bool cmp(string s1, string s2) {
  if (s1.size() != s2.size()) return s1.size() < s2.size();
  return s1 < s2;
}

int main() {

    int N;
    cin >> N;

    vector<string> v(N);

    for(auto &s : v) cin >> s;

    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(auto s : v) cout << s << "\n";
}
