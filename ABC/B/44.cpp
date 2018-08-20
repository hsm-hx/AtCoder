#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  string w;

  cin >> w;

  sort(w.begin(), w.end());

  for(int i = 0; i < w.size(); i += 2){
    if(w.size() == 1){
      cout << "No" << endl;
      return 0;
    }
    if(w.at(i) != w.at(i+1)){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}
