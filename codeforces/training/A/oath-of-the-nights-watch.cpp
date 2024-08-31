#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n < 3) {
    cout << 0 << endl;
    return 0;
  }

  vector<int> v(n);
  int mini = 1000000000, maxi = -1;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    mini = min(mini, v[i]);
    maxi = max(maxi, v[i]);
  }

  int c, res = 0;
  for (int i = 0; i < n; i++) {
    c = v[i];
    if (c > mini && c < maxi)
      res++;
  }
  cout << res << endl;
}
