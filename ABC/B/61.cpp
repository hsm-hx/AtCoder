#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, m;
  vector<int> a(50), b(50);

  cin >> n >> m;
  for(int i = 0; i < m; i ++)
    cin >> a.at(i) >> b.at(i);

  map<int, int> c;

  for(int i = 0; i < m; i ++){
    c[a.at(i)] ++;
    c[b.at(i)] ++;
  }

  for(int i = 0; i < n; i ++){
    cout << c[i+1] << endl;
  }

  return 0;
}
