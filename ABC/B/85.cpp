#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin >> n;

  vector<int> d(100, 999);

  for(int i = 0; i < n; i ++){
    cin >> d.at(i);
  }

  int count = 0;

  int temp = 999;

  for(int i = 0; i < n; i ++){
    int min = *min_element(d.begin(), d.end());
    vector<int>::iterator minIt = min_element(d.begin(), d.end());
    int minIndex = distance(d.begin(), minIt);

    d.at(minIndex) = 999;
    
    if(min == temp) continue;
    else count ++;

    temp = min;
  }
  
  cout << count << endl;

  return 0;
}
