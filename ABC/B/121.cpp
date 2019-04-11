#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n, m, c;
  vector<int> b(20);
  int a[20][20];

  cin >> n >> m >> c;

  for(int i = 0; i < m; i ++)
    cin >> b.at(i);
  for(int i = 0; i < n; i ++)
    for(int j = 0; j < m; j ++)
      cin >> a[i][j];

  int count = 0;

  for(int i = 0; i < n; i ++){
    int sum = 0;
    for(int j = 0; j < m; j ++){
      sum += a[i][j] * b.at(j);
    }
    if((sum+c) > 0) count ++;
  }

  cout << count << endl;

  return 0;
}
