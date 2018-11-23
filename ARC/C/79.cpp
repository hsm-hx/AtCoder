#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
  string s;
  vector<int> num(4);
  cin >> s;

  for(int i = 0; i < 4; i ++){
    num.at(i) = s.at(i)-48;
  }

  int bits;
  for(bits = 0; bits < pow(2, 3); bits ++){
    int sum = num.at(0);
    for(int i = 0; i < 3; i ++){
      if((bits << i) & 4){
        sum -= num.at(i+1);
      }
      else sum += num.at(i+1);
    }
    if(sum == 7){
      cout << num.at(0);
      for(int i = 0; i < 3; i ++){
        if((bits << i) & 4) cout << "-" << num.at(i+1);
        else cout << "+" << num.at(i+1);
      }
      cout << "=7" << endl;

      return 0;
    }
  }

  return 0;
}
