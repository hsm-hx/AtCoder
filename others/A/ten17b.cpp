#include <iostream>
#include <string>
using namespace std;

int main(void){
  string s;
  cin >> s;
  
  int count = 0;
  for(int i = 0; i < 6; i ++)
    if(s.at(i) == '1') count ++;

  cout << count << endl;

  return 0;
}
