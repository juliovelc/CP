#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << endl;
}

int partition(vector<int> &v, int startIndex, int endIndex) {
  int temp, l = startIndex - 1, r = startIndex;

  while (r < endIndex) {
    if (v[r] < v[endIndex]) {
      l++;
      temp = v[r];
      v[r] = v[l];
      v[l] = temp;
    }
    r++;
  }
  l++;
  temp = v[endIndex];
  v[endIndex] = v[l];
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
  vector<int> test = {3, 5, 7, 2, 1, 10, 9};
  quickSort(test, 0, test.size() - 1);
  printVector(test);
}
