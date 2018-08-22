#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n, m;
  vector<int> t(100), p(100), x(100);

  cin >> n;

  for(int i = 0; i < n; i ++)
    cin >> t.at(i);

  cin >> m;

  for(int i = 0; i < m; i ++)
    cin >> p.at(i) >> x.at(i);

  for(int i = 0; i < m; i ++){
    int sum = 0;
    for(int j = 0; j < n; j ++){
      if(j == (p.at(i)-1)) sum += x.at(i);
      else sum += t.at(j);
    }
    cout << sum << endl;
  }

  return 0;

}
