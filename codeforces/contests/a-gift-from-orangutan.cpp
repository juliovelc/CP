#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main() {
  int t, n, ni, mini, maxi;

  cin >> t;
  for (int tt = 0; tt < t; tt++) {
    cin >> n;
    if (n == 1) {
      cin >> ni;
      cout << 0 << endl;
      continue;
    }
    mini = INT_MAX;
    maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
      cin >> ni;
      mini = min(ni, mini);
      maxi = max(ni, maxi);
    }
    cout << ((maxi - mini) * (n - 1)) << endl;
  }
}
