#include <iostream>
using namespace std;

int main(void){
  string s;

  cin >> s;

  int c = 999, f = 999;

  for(int i = 0; i < s.size(); i ++)
    if(s.at(i) == 'C'){
      c = i;
      break;
    }

  for(int i = s.size() - 1; i >= 0; i --)
    if(s.at(i) == 'F'){
      f = i;
      break;
    }

  if(c < f && c != 999 && f != 999) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
