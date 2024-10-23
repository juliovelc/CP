#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &v, int turn) {
  int l = 0, r = 0, li, ri;
  int mli = li, mri = ri, diff = 0;
  for (int i = 0; i < v.size(); i++) {
    li = 0;
    ri = 1;
    while (!l || !r) {
      l = v[li];
      r = v[ri];
      if (!l)
        li++;
      if (!r)
        ri++;
    }
    if (diff < abs(l - r)) {
      mli = li;
      mri = ri;
      diff = abs(l - r);
    }
  }
  switch (turn) {
  case 0:
    if (l >= r)
      v[mri] = 0;
    else
      v[mli] = 0;
    break;
  case 1:
    if (l <= r)
      v[mri] = 0;
    else
      v[mli] = 0;
    break;
  }
}
int main() {
  int t, vsize, turn, res;

  for (int i = 0; i < t; i++) {
    cin >> vsize;
    vector<int> v(vsize);
    turn = res = 0;
    for (int vi = 0; vi < vsize; vi++) {
      cin >> v[vi];
    }
    for (int ti = 0; ti < vsize - 1; ti++) {
      solve(v, turn);
      turn = (turn + 1) % 2;
    }
    for (int x = 0; x < vsize; x++)
      res += v[x];
    cout << res << endl;
  }
}
