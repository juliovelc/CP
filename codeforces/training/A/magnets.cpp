#include <iostream>

using namespace std;

int main() {
  int n, res = 1;
  cin >> n;

  int a, b;
  cin >> a;
  for (int i = 1; i < n; i++) {
    cin >> b;
    if (a != b) {
      res++;
    }
    a = b;
  }
  cout << res << "\n";
}
