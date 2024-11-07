#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, l;
  cin >> n;
  string res;

  for (int i = 0; i < n; i++) {
    cin >> l;
    res = "";

    if (l == 1 || l == 3) {
      cout << -1 << endl;
      continue;
    }

    if (l % 2 == 0) {
      for (int j = 0; j < l - 2; j++) {
        res.append("3");
      }
      res.append("66");
      cout << res << endl;
      continue;
    }
    for (int f = 0; f < l - 4; f++) {
      res.append("3");
    }
    res.append("63");
    res.append("66");

    cout << res << endl;
  }
}
