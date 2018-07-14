#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, x;

  cin >> n >> x;

  cout << ((n-x)>(x-1)?x-1:n-x) << endl;

  return 0;
}