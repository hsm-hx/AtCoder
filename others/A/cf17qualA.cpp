#include <iostream>
using namespace std;

int main(void){
  string s;

  cin >> s;

  string sub = s.substr(0, 4);

  if(sub == "YAKI") cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
