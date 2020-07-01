#include <climits>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int cap = INT_MAX;
    int count = 0;
    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;
      if (val <= cap) {
        count++;
        cap = val;
      }
    }
    cout << count << endl;
  }
  return 0;
}