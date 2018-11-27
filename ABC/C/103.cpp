#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(void){
  int n;
  vector<int> a(3000);

  cin >> n;
  for(int i = 0; i < n; i ++)
    cin >> a.at(i);

  int result = 0;
  for(int i = 0; i < n; i ++)
    result += a.at(i)-1;

  cout << result << endl;

  return 0;
}
