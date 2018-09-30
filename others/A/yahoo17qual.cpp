#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void){
  string s;

  cin >> s;
  
  map<char, int> m;

  for(int i = 0; i < 5; i ++){
    m[s.at(i)] ++;
  }

  if(m['y'] == 1 && m['a'] == 1 && m['h'] == 1 && m['o'] == 2)
    cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
