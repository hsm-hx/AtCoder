#include <iostream>
using namespace std;

int main(void){
  string s;
  cin >> s;

  int min = 9999;
  for(int i = 0; i < s.size()-2; i ++){
    int n = stoi(s.substr(i, 3));
    if(min > abs(n-753)){
      min = abs(n-753);
    }
  }

  cout << min << endl;

  return 0;
}
