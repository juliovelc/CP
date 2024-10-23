#include <iostream>

using namespace std;

int main() {
  int n, t, k, o;
  cin >> n >> t >> k >> o;

  // 1 oven
  int t1 = ((n + k - 1) / k) * t;

  // 2 ovens
  int baked_cakes = (o / t) * k;
  n = max(0, n - baked_cakes);
  int t2 = o + (((n + (2 * k) - 1) / (2 * k)) * t);

  if (t2 < t1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
