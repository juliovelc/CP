#include <iostream>

using namespace std;

void simplify(int a) {
  int i = 2, b = 6;
  while (i <= 6) {
    if (a % i == 0 && b % i == 0) {
      a /= i;
      b /= i;
      continue;
    }
    i++;
  }
  cout << a << "/" << b << endl;
}

int main() {
  int a, b;
  cin >> a >> b;
  int prob = (6 - max(a, b)) + 1;
  simplify(prob);
}
