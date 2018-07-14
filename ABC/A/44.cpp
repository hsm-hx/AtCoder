#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, k, x, y;

  cin >> n >> k >> x >> y;

  cout << (n>k ? k*x+(n-k)*y : n*x);

  return 0;
}
