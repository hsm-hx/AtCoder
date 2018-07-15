#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s;
  cin >> s;

  vector<string> words{"dream", "dreamer", "erase", "eraser"};

  for(int i = 0; i < 4; i ++){
    reverse(words.at(i).begin(), words.at(i).end());
  }
  reverse(s.begin(), s.end());

  while(1){
    bool flag = false;
    for(int i = 0; i < 4; i ++){
      if(equal(words.at(i).begin(), words.at(i).end(), s.begin())){
        auto pos = s.find(words.at(i));
        auto len = words.at(i).length();
        s.replace(pos, len, "");
        flag = true;
      }
    }
    if(flag == false){
      if(s == "") break;

      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  
  return 0;
}
