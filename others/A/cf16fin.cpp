#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int h, w;
  string s[26][26];

  char a[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
    'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
    'X', 'Y', 'Z'};

  cin >> h >> w;

  for(int i = 0; i < h; i ++)
    for(int j = 0; j < w; j ++)
      cin >> s[i][j];

  for(int i = 0; i < h; i ++)
    for(int j = 0; j < w; j ++)
      if(s[i][j] == "snuke")
        cout << a[j] << i+1 << endl;

  return 0;
}
