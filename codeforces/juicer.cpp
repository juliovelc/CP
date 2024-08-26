#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, size_limit, waste_limit;
  cin >> n >> size_limit >> waste_limit;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  int waste = 0, res = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] > size_limit)
      continue;
    waste += v[i];

    if (waste > waste_limit) {
      waste = 0;
      res++;
    }
  }
  cout << res << endl;
}
