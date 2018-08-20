#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int n, l, i;
  vector<string> s(100);

  cin >> n >> l;

  for(i = 0; i < n; i ++)
    cin >> s.at(i);

  for(i = 0; i < n; i ++)
    if(s.at(i) == "") break;

  s.erase(s.begin()+i, s.end());

  sort(s.begin(), s.end());

  for(i = 0; i < n; i ++)
    cout << s.at(i);

  cout << endl;

  return 0;
}
