#define ll long long
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long maxRevenue(long long *arr, ll n) {
  sort(arr, arr + n);
  long long max = 0;
  for (long long i = 0; i < n; i++) {
    long long val = arr[i] * (n - i);
    if (val > max) {
      max = val;
    }
  }
  return max;
}

int main() {
  int n;
  cin >> n;
  // IN THIS QUESTION, new long long(n) didn't work but new long long[n] worked
  long long *arr = new long long[n];
  for (int i = 0; i < n; i++) {
    long long inp;
    cin >> inp;
    arr[i] = inp;
  }
  cout << maxRevenue(arr, n) << endl;
  delete arr;
  return 0;
}