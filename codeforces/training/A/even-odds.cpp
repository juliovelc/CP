#include <iostream>

using namespace std;

int main() {
  int64_t n, k, odds, start = 1;
  cin >> n >> k;

  if (n % 2 == 0)
    odds = n / 2;
  else
    odds = (n / 2) + 1;

  if (k > odds) {
    start = 2;
    k -= odds;
  }
  k--;

  for (int i = 0; i < k; i++) {
    start += 2;
  }
  cout << start << endl;
}
