#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  int l, maxi, mini;
  for (int i = 0; i < n; i++) {
    maxi = INT_MIN, mini = INT_MAX;
    for (int j = 0; j < n; j++) {
      if (j == i)
        continue;
      l = abs(v[j] - v[i]);
      mini = min(mini, l);
      maxi = max(maxi, l);
    }
    cout << mini << ' ' << maxi << endl;
  }
}
