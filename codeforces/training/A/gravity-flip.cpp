#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  int diff;
  for (int i = n - 2; i >= 0; i--) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        diff = v[i] - v[j];
        v[j] += diff;
        v[i] -= diff;
        i++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
}
