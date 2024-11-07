#include <iostream>

using namespace std;

int main() {
  int t;
  long long n, m, r, c, res;

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n >> m >> r >> c;
    res = 0;

    long long aff = (n - r) * m + (m - c);
    res += aff;
    res += (aff / m) * (m - 1);
    cout << res << endl;
  }
}
