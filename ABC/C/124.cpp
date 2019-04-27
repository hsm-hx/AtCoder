#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  string s;
  cin >> s;
  
  string t1 = "0", t2 = "1";
  
  for(int i = 0; i < s.length(); i ++){
    if(t1.at(i) == '0') t1.push_back('1');
    else t1.push_back('0');
  }
  for(int i = 0; i < s.length(); i ++){
    if(t2.at(i) == '0') t2.push_back('1');
    else t2.push_back('0');
  }
  
  int c = 0, d = 0;
  for(int i = 0; i < s.length(); i ++){
    if(s.at(i) != t1.at(i)) c ++;
    if(s.at(i) != t2.at(i)) d ++;
  }
  
  cout << min(c, d) << endl;
  
  return 0;
}
