#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  vector<int>t(8);

  for(int i = 0; i < 8; i ++)
    cin >> t.at(i);

  cout << *max_element(t.begin(), t.end()) << endl;

  return 0;
}
