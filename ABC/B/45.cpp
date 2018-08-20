#include <iostream>
#include <vector>
using namespace std;

int nextPlayer(char c){
  if(c == 'a') return 0;
  if(c == 'b') return 1;
  if(c == 'c') return 2;
}

int main(void){
  vector<string> s(3);

  for(int i = 0; i < s.size(); i ++)
    cin >> s.at(i);

  for(int i = 0; i < s.size(); i ++)
    s.at(i) += 'D';

  int i = 0;
  int x = 0, y = 0, z = 0;
  while(1){
    if(i == 0){
      if(s.at(0).at(x) == 'D') break;
      else i = nextPlayer(s.at(0).at(x++));
    }
    if(i == 1){
      if(s.at(1).at(y) == 'D') break;
      else i = nextPlayer(s.at(1).at(y++));
    }
    if(i == 2){
      if(s.at(2).at(z) == 'D') break;
      else i = nextPlayer(s.at(2).at(z++));
    }
  }

  if(i == 0) cout << "A";
  if(i == 1) cout << "B";
  if(i == 2) cout << "C";

  cout << endl;

  return 0;
}
      
