#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n * 2);

  for (int i = 0; i < n * 2; i++) {
    cin >> v[i];
  }

  int res = 0;
  for (int i = 0; i < n * 2; i += 2) {
    for (int j = 1; j < n * 2; j += 2) {
      if (v[i] == v[j])
        res++;
    }
  }
  cout << res << endl;
}
