#include <iostream>
#include <string>

using namespace std;

int main() {
  string n, t;
  cin >> n >> t;

  if (stoi(t) == 10) {
    if (stoi(n) == 1) {
      cout << "-1" << endl;
      return 0;
    } else {
      string edgeCase = "1";
      for (int i = 0; i < stoi(n) - 2; i++) {
        edgeCase.append("1");
      }
      edgeCase.append("0");
      cout << edgeCase << endl;
      return 0;
    }
  }

  string res = t;
  for (int i = 0; i < stoi(n) - 1; i++) {
    res.append(t);
  }

  cout << res << endl;
}
