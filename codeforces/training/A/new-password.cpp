#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    cout << static_cast<char>(i + 'a');
  }
  n -= k;
  if (n <= 0) {
    cout << endl;
    return 0;
  }

  int c = 0;
  for (int i = 0; i < n; i++) {
    cout << static_cast<char>(c + 'a');
    c = (c + 1) % k;
  }
  cout << endl;
}
