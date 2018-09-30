#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void){
  int n, k;
  vector<int> x(100000);

  cin >> n >> k;

  for(int i = 0; i < n; i ++)
    cin >> x.at(i);

  for(int i = 0; i < n; i ++)
    x.at(i) = x.at(i).abs;

  for(int i = 0; i < n-k; i ++)
    max_element(x.begin(), x.end()) = 0;

  cout << accumulate(x, x + x.size, 0);

  return 0;
}
