#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<bool> v(26);

  int fix;
  for (int i = 0; i < n; i++) {
    if (s[i] < 97)
      v[s[i] - 'A'] = true;
    else
      v[s[i] - 'a'] = true;
  }

  for (int i = 0; i < 26; i++) {
    if (!v[i]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
}
