//Solution for https://atcoder.jp/contests/abc206/tasks/abc206_c
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  long long n;
  cin >> n;
  long long a[n];

  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a, a+n);

  long long ans = n-1, reduce = 0;
  for (int i = 1; i < n; i++) {
    if (a[i-1] == a[i])
      reduce++;
    else if (reduce > 0) {
      ans -= (reduce*(reduce+1))/2;
      reduce = 0;
    }
    ans += n-(i+1);
  }
  if (reduce > 0)
    ans -= (reduce*(reduce+1))/2;
  cout << ans << endl;

}
