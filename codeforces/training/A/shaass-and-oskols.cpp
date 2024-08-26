#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> wires(n);

  for (int i = 0; i < n; i++)
    cin >> wires[i];

  int shots;
  cin >> shots;
  int x, y, birds, left, right;
  for (int i = 0; i < shots; i++) {
    cin >> x >> y;
    birds = wires[x - 1];

    left = y - 1;
    right = abs(birds - left) - 1;
    if (x - 2 >= 0) {
      wires[x - 2] += left;
    }
    if (x < n) {
      wires[x] += right;
    }
    wires[x - 1] = 0;
  }
  for (int i = 0; i < n; i++)
    cout << wires[i] << endl;
}
