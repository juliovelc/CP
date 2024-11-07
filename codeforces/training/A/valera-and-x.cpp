#include <iostream>
#include <string>

using namespace std;

bool rowOk(string s, int l, int r, char x, char y) {
  for (int i = 0; i < s.size(); i++) {
    if (i == l || i == r) {
      if (s[i] != x)
        return false;
      else
        continue;
    }

    if (s[i] != y)
      return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  char x = s[0];
  char y = s[1];
  if (x == y) {
    cout << "NO" << endl;
    return 0;
  }
  int l = 0, r = s.size() - 1;
  bool perfectX;

  perfectX = rowOk(s, l, r, x, y);
  if (!perfectX) {
    cout << "NO" << endl;
    return 0;
  }

  for (int i = 0; i < n - 1; i++) {
    cin >> s;
    l++;
    r--;
    perfectX = rowOk(s, l, r, x, y);
    if (!perfectX) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
