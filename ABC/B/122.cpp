#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  string s;
  cin >> s;

  int maxel = 0, temp = 0;
  for(int i = 0; i < s.size(); i ++){
    if(s.at(i) == 'A' || s.at(i) == 'C' || s.at(i) == 'G' || s.at(i) == 'T')
      temp ++;
    else{
      if(maxel < temp)
        maxel = temp;
      temp = 0;
    }
  }

  cout << max(maxel, temp) << endl;

  return 0;
}
