#include <iostream>

using namespace std;

int gcd(int a, int b) {
  // where b greater than a
  int mod;
  while (a) {
    mod = b % a;
    b = a;
    a = mod;
  }
  return b;
}

int main() {
  int t;
  cin >> t;

  int l, r;
  int a, b, c, res;
  for (int i = 0; i < t; i++) {
    cin >> l >> r;
    res = 0;
    for (int tt = l; tt + 2 <= r; tt++) {
      a = tt;
      b = tt + 1;
      c = tt + 2;
      if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 1) {
        tt += 2;
        res++;
      }
    }
    cout << res << endl;
  }
}
