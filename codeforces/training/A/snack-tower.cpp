#include <iostream>
#include <vector>

using namespace std;

void printSnacks(vector<bool> v, int &n) {
  for (; n > 0; n--) {
    if (v[n]) {
      cout << n << ' ';
    } else {
      break;
    }
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<bool> v(n + 1);

  int snack;
  while (n) {
    cin >> snack;
    v[snack] = true;
    if (v[n]) {
      printSnacks(v, n);
    } else {
      cout << endl;
    }
  }
}
