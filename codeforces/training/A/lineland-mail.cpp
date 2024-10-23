#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int len(int start, int end) { return abs(end - start); }

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  cout << len(v[0], v[1]) << ' ' << len(v[0], v[n - 1]) << endl;
  int mini, maxi;
  for (int i = 1; i < n - 1; i++) {
    mini = min(len(v[i], v[i - 1]), len(v[i], v[i + 1]));
    maxi = max(len(v[i], v[0]), len(v[i], v[n - 1]));
    cout << mini << ' ' << maxi << endl;
  }
  cout << len(v[n - 1], v[n - 2]) << ' ' << len(v[n - 1], v[0]) << endl;
}
