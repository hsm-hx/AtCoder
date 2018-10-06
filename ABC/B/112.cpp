#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, t;
  vector<int> c(100), a(100);

  cin >> n >> t;
  for(int i = 0; i < n; i ++)
    cin >> c.at(i) >> a.at(i);

  int m = 10000;
  for(int i = 0; i < n; i ++){
    if(a.at(i) <= t && c.at(i) < m){
      m = c.at(i);
    }
  }

  if(m == 10000) cout << "TLE" << endl;
  else cout << m << endl;

  return 0;
}
