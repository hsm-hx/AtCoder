#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, count = 0;
  cin >> n;

  vector<int> a(200);

  for(int i = 0; i < n; i ++)
    cin >> a.at(i);

  while(true){
    bool flag = true;
    int i = 0;
    for(i = 0; i < n; i ++)
      if(a.at(i) % 2){
        flag = false;
        break;
      }
    
    if(flag == false) break;

    if(flag == true){
      for(int i = 0; i < n; i ++)
        a.at(i) /= 2;
      count ++;
    }
  }

  cout << count << endl;

  return 0;
}
