#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  vector<int> a(5, 0);
  vector<int> b(5, 0);
  for(int i = 0; i < 5; i ++)
    cin >> a.at(i);

  int res = 0, maxel = 0;

  for(int i = 0; i < 5; i ++){
    int temp;
    if(a.at(i) % 10 != 0)
      temp = 10 - a.at(i)%10;
    else
      temp = 0;

    res += a.at(i) + temp; 

    maxel = max(maxel, temp);
  }

  cout << res - maxel << endl;

  return 0;
}
