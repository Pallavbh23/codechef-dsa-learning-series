#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int i, q, g;
    long long n;
    cin >> g;
    while (g--) {
      cin >> i >> n >> q;
      if (i != q) {
        if (n % 2 == 1) {
          cout << (n / 2) + 1 << endl;
        } else {
          cout << n / 2 << endl;
        }
      } else {
        cout << n / 2 << endl;
      }
    }
  }
  return 0;
}