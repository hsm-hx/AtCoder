#include <iostream>
using namespace std;

int main(void){
  string s, result = "";

  cin >> s;

  for(int i = 0; i < s.size(); i ++){
    if(s[i] == '0') result += "0";
    if(s[i] == '1') result += "1";
    if(s[i] == 'B' && !result.empty()) result.pop_back();
  }

  cout << result << endl;

  return 0;
}
