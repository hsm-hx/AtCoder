#include <bits/stdc++.h>
using namespace std;

int main(void){
  string o, e;
  cin >> o >> e;

  for(int i = 0; i < e.size(); i ++){
    cout << o.at(i) << e.at(i);
  }

  if(o.size() != e.size()) cout << o.at(o.size() - 1);

  cout << endl;

  return 0;
}
