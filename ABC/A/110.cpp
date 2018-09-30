#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
  vector<int> n(3);

  for(int i = 0; i < 3; i ++){
    cin >> n.at(i);
  }

  sort(n.begin(), n.end());

  cout << n[0] + n[1] + n[2]*10 << endl;

  return 0;
}
