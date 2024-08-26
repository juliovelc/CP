#include <iostream>
#include <string>

using namespace std;

int main() {
  int t, tt;
  cin >> t;

  string s;
  for (int i = 0; i < t; i++) {
    cin >> tt >> s;
    if (s[0] == s[tt - 1])
      cout << "no" << endl;
    else
      cout << "yes" << endl;
  }
}
