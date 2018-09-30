#include <bits/stdc++.h>
using namespace std;

int main(void){
  int w, a, b;
  cin >> w >> a >> b;

  if(a > b){
    int temp = a;
    a = b;
    b = temp;
  }

  int start = a,
      end   = a+w;

  int dist;
  if(start <= b && b <= end) dist = 0;
  else dist = min(abs(b-start), abs(b-end));

  cout << dist << endl;

  return 0;
}
