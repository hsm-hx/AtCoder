#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n, i;
  vector<int> t(100001, 0);
  vector<int> x(100001, 0);
  vector<int> y(100001, 0);

  cin >> n;

  for(i = 1; i <= n; i ++)
    cin >> t.at(i) >> x.at(i) >> y.at(i);

  for(i = 1; i <= n; i ++){
    int dist = abs(x.at(i)-x.at(i-1)) + abs(y.at(i)-y.at(i-1));
    int dt = t.at(i)-t.at(i-1);
    if(dist > dt) break;
    if(dist%2 == dt%2) continue;
    else break;
  }

  if(i == n+1) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
