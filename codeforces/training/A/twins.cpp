#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &v, int startIndex, int endIndex) {
  int temp, l = startIndex - 1, r = l + 1;

  while (r < endIndex) {
    if (v[r] > v[endIndex]) {
      temp = v[r];
      v[r] = v[++l];
      v[l] = temp;
    }
    r++;
  }
  temp = v[endIndex];
  v[endIndex] = v[++l];
  v[l] = temp;
  return l;
}

void quickSort(vector<int> &v, int startIndex, int endIndex) {
  if (startIndex >= endIndex)
    return;

  int pivotIndex = partition(v, startIndex, endIndex);
  quickSort(v, startIndex, pivotIndex - 1);
  quickSort(v, pivotIndex + 1, endIndex);
}

int main() {
  int n, bro1 = 0, bro2 = 0, coins = 0;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    bro2 += v[i];
  }
  quickSort(v, 0, n - 1);

  for (int i = 0; i < n; i++) {
    bro1 += v[i];
    bro2 -= v[i];
    coins++;
    if (bro1 > bro2) {
      cout << coins << endl;
      return 0;
    }
  }
}
