#include <iostream>
using namespace std;

int main(void){
  string s;
  string c = "CODEFESTIVAL2016";

  int count = 0;

  cin >> s;

  for(int i = 0; i < s.size(); i ++)
    if(s.at(i) != c.at(i)) count ++;

  cout << count << endl;

  return 0;
}
