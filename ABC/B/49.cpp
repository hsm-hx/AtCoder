#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int h, w;
  vector<string> c(100);

  cin >> h >> w;

  for(int i = 0; i < h; i ++)
    cin >> c.at(i);

  for(int i = 0; i < h; i ++)
    cout << c.at(i) << endl << c.at(i) << endl;

  return 0;
}
