#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  vector<int> a(3);

  for(int i = 0; i < a.size(); i ++)
    cin >> a.at(i);

  int x, y, z;

  x = abs(a.at(0) - a.at(1));
  y = abs(a.at(0) - a.at(2));
  z = abs(a.at(1) - a.at(2));

  cout << (x+y+z - max({x, y, z})) << endl;

  return 0;
}
