#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, m;
  vector<int> a(50), b(50), c(50), d(50);

  cin >> n >> m;

  for(int i = 0; i < n; i ++)
    cin >> a.at(i) >> b.at(i);
  for(int i = 0; i < m; i ++)
    cin >> c.at(i) >> d.at(i);

  // 人数分繰り返す
  for(int i = 0; i < n; i ++){
    int point = 99;
    int point_dist = 1000000000;
    for(int j = 0; j < m; j ++){
      int temp = abs(a.at(i) - c.at(j)) + abs(b.at(i) - d.at(j));
      // cout << "student: (" << a.at(i) << "," << b.at(i) << ")" << endl;
      if(point_dist > temp){
        point = j;
        point_dist = temp;
      }
    }
     cout << point + 1 << endl;
  }

  return 0;
}
