#include <iostream>
using namespace std;

int main(void){
  string s;
  int start, end;

  cin >> s;

  for(int i = 0; i < s.size(); i ++)
    if(s.at(i) == 'A'){
      start = i;
      break;
    }
    
  for(int i = s.size()-1; i >= 0; i --)
    if(s.at(i) == 'Z'){
      end = i;
      break;
    }

  cout << end - start + 1 << endl;

  return 0;
}
