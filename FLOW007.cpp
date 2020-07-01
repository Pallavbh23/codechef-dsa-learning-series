#include <iostream>
using namespace std;

int reverse(int i) {
  int rev = 0;
  while (i > 0) {
    int rem = i % 10;
    rev = rev * 10 + rem;
    i = i / 10;
  }
  cout << endl;
  return rev;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int i;
    cin >> i;
    cout << reverse(i);
  }
  return 0;
}