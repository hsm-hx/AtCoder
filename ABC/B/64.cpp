#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  vector<int> a(100);

  cin >> n;
  for(int i = 0; i < n; i ++)
    cin >> a.at(i);

  cout << *max_element(a.begin(), a.begin()+n) - *min_element(a.begin(), a.begin()+n) << endl;

  return 0;
}
