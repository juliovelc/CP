#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  int steps = 0, start = 0;
  for (int i = 0; i < s.size(); i++) {
    int nxt = s[i] - 'a';
    steps += min(abs(start - nxt), 26 - abs(start - nxt));
    start = nxt;
  }
  cout << steps << "\n";
}
