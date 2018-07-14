#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin >> n;

  vector<int> a(100);

  for(int i = 0; i < n; i ++)
    cin >> a.at(i);

  int alice = 0, bob = 0;

  for(int i = 0; i < n; i ++){
    int max = *max_element(a.begin(), a.end());

    if(i%2) bob += max;
    else alice += max;
    
    for(int j = 0; j < n; j ++)
      if(a.at(j) == max){
        a.at(j) = 0;
        break;
      }
  }

  cout << alice - bob << endl;

  return 0;
}


