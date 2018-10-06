#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s;
  cin >> s;
  map<char, int> m;

  for(int i = 0; i < s.size(); i ++)
    m[s.at(i)] ++;

  for(char i = 'a'; i <= 'z'; i ++)
    if(m[i] >= 2){
      cout << "no" << endl;
      return 0;
    }

  cout << "yes" << endl;

  return 0;
}
