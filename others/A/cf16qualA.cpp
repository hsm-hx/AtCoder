#include <iostream>
#include <string>
using namespace std;

int main(void){
  string s;

  cin >> s;
  
  s.insert(s.begin() + 4, ' ');

  cout << s << endl;

  return 0;
}
