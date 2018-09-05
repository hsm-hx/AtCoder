#include <iostream>
using namespace std;

int main(void){
  string s;

  cin >> s;

  if(s.find("AC") != string::npos) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
