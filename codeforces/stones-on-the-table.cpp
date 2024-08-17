#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int res = 0;
  for (int i = 0, j = 1; i < n; i++, j++) {
    if (s[i] == s[j])
      res++;
  }
  cout << res << endl;
}
