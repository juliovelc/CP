#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n;

  int sz;
  for (int i = 0; i < n; i++) {
    cin >> s;
    sz = s.size();

    if (sz <= 10) {
      cout << s << endl;
      continue;
    }
    cout << s[0] << sz - 2 << s[sz - 1] << endl;
  }
}
