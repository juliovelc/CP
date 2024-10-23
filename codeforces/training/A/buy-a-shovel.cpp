#include <iostream>

using namespace std;

int main() {
  int k, r;
  cin >> k >> r;

  int shovels = 1;

  for (int i = 1; i <= 10; i++) {
    int maxPrice = k * i;
    if (maxPrice % 10 == 0 || maxPrice % 10 == r) {
      shovels = i;
      break;
    }
  }
  cout << shovels << endl;
}
