#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int sereja = 0, dima = 0, turn = 0;
  int l = 0, r = n - 1;
  int lvalue, rvalue;
  while (n--) {
    lvalue = rvalue = 0;
    if (l < v.size())
      lvalue = v[l];
    if (r >= 0)
      rvalue = v[r];

    if (lvalue >= rvalue) {
      if (turn == 0) {
        sereja += lvalue;
        turn = 1;
      } else {
        dima += lvalue;
        turn = 0;
      }
      l++;
    } else {
      if (turn == 0) {
        sereja += rvalue;
        turn = 1;
      } else {
        dima += rvalue;
        turn = 0;
      }
      r--;
    }
  }
  cout << sereja << " " << dima << endl;
}
