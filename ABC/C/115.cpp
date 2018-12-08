#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int n, k;
  vector<int> h;
  cin >> n >> k;
  for(int i = 0; i < n; i ++){
    int temp;
    cin >> temp;
    h.push_back(temp);
  }

  sort(h.begin(), h.end());

  int min = 1000000001;
  for(int i = 0; i < n-k+1; i ++){
    int hmin = h.at(i);
    int hmax = h.at(i+k-1);

    if(min > (hmax - hmin)) min = hmax - hmin;
  }

  cout << min << endl;

  return 0;
}
