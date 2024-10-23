#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int aconv, bconv;
  for (int i = 0; i < a.size(); i++) {
    aconv = (int)a[i];
    bconv = (int)b[i];

    if (aconv <= 90)
      aconv += 32;

    if (bconv <= 90)
      bconv += 32;

    if (aconv > bconv) {
      cout << "1" << endl;
      return 0;
    }
    if (aconv < bconv) {
      cout << "-1" << endl;
      return 0;
    }
  }
  cout << "0" << endl;
}
