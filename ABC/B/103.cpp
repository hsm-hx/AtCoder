#include <iostream>
using namespace std;

int main(void){
  string s, t;
  cin >> s >> t;

  for(int i = 0; i < int(s.length()); i ++){
    if(s == t){
      cout << "Yes" << endl;
      return 0;
    }
    else{
      char temp = s.at(s.length() - 1);
      s.pop_back();
      s = temp + s;
    }
  }

  cout << "No" << endl;

  return 0;
}
