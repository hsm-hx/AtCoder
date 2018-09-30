#include <iostream>
#include <string>
using namespace std;

int main(void){
  string s;

  cin >> s;
  
  if(s.find("yah") == 0){
    if(s.at(3) == s.at(4)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  else
    cout << "NO" << endl;

  return 0;
}
