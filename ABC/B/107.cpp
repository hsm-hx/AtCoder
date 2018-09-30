#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int h, w;
  int i, j;
  vector<string> a(100);

  cin >> h >> w;

  for(i = 0; i < h; i ++){
    cin >> a.at(i);
  }

  for(i = 0; i < h; i ++){
    if(a.at(i).find("#") != string::npos){
      continue;
    }
    else{
      cout << a.at(i) << endl;
      a.erase(a.begin() + i);
      h --;
    }
  }

  for(i = 0; i < w; i ++){
    for(j = 0; j < h; j ++){
      // #を含む場合次の行へ
      if(a.at(j).at(i) == '#')
        break;
    }
    if(j == h){
      for(j = 0; j < h; j ++){
        a.at(j).erase(a.at(j).begin() + i);
      }
      w --;
    }
  }
      
  for(int i = 0; i < h; i ++)
    cout << a.at(i) << endl;

  return 0;
}
