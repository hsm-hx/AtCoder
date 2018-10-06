#include <bits/stdc++.h>
using namespace std;

int main(void){
  int h, w;
  vector<string> a(100);

  cin >> h >> w;
  for(int i = 0; i < h; i ++)
    cin >> a.at(i);

  for(int i = 0; i < w+2; i ++)
    cout << "#";
  cout << endl;
  for(int i = 0; i < h; i ++){
    cout << "#" << a.at(i) << "#" << endl;
  }
  for(int i = 0; i < w+2; i ++)
    cout << "#";
  cout << endl;

  return 0;
}
