#include <iostream>

using namespace std;

int main() {
  int t, tt, tn, tk, p, gold, res;
  cin >> t;

  for (tt = 0; tt < t; tt++) {
    cin >> tn >> tk;
    gold = res = 0;
    for (int i = 0; i < tn; i++) {
      cin >> p;
      if (p == 0 && gold > 0) {
        gold--;
        res++;
      }
      if (p >= tk)
        gold += p;
    }
    cout << res << endl;
  }
}
