#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long k;
    int d0, d1;
    cin >> k >> d0 >> d1;
    if (k < 4) {
      int sum = d0 + d1;
      for (int i = 2; i < k; i++) {
        sum += sum % 10;
      }
      if (sum % 3 == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
      continue;
    }
    if ((d0 + d1) % 5 == 0) {
      cout << "NO" << endl;
      continue;
    }
    k = k - 4;
    int rem = k % 4;
    int rem2 = (k / 4) % 3;
    int sum4 = d0 + d1;
    for (int i = 0; i < 2; i++) {
      sum4 += sum4 % 10;
    }

    int first[4];
    first[0] = sum4 % 10;
    int sum1 = sum4 + first[0];
    for (int i = 1; i < 4; i++) {
      first[i] = sum1 % 10;
      sum1 += sum1 % 10;
    }

    int final_sum = sum4;
    for (int i = 0; i < rem; i++) {
      final_sum += first[i];
    }
    final_sum += rem2 * 20;
    if (final_sum % 3 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}