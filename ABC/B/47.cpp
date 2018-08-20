#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int w, h, n;
  vector<int> x(100), y(100), a(100);

  cin >> w >> h >> n;

  int wu = 0, hu = 0;

  for(int i = 0; i < n; i ++)
      cin >> x.at(i) >> y.at(i) >> a.at(i);

  for(int i = 0; i < n; i ++){
    if(a.at(i) == 1) wu = (wu < x.at(i)) ? x.at(i) : wu;
    if(a.at(i) == 2) w = (w > x.at(i)) ? x.at(i) : w;
    if(a.at(i) == 3) hu = (hu < y.at(i)) ? y.at(i) : hu;
    if(a.at(i) == 4) h = (h > y.at(i)) ? y.at(i) : h;
  }
  
  if((w - wu) <= 0 || (h - hu) <= 0) cout << 0 << endl;
  else cout << (w-wu) * (h-hu) << endl;

  return 0;
}
