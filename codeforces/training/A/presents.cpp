#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> res(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++) {
    res[v[i] - 1] = i + 1;
  }
  for (int i = 0; i < n; i++)
    cout << res[i] << ' ';
  cout << endl;
}
