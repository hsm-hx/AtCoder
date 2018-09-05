#include <iostream>
using namespace std;

int main(void){
  string s;

  cin >> s;

  s.erase(s.end() - 8, s.end());

  cout << s << endl;

  return 0;
}
