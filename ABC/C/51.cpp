#include <iostream>
using namespace std;

int main(void){
  int sx, sy, tx, ty;

  cin >> sx >> sy >> tx >> ty;

  int height = ty - sy;
  int width  = tx - sx;

  for(int i = 0; i < height; i ++)
    cout << "U";
  for(int i = 0; i < width; i ++)
    cout << "R";
  for(int i = 0; i < height; i ++)
    cout << "D";
  for(int i = 0; i < width+1; i ++)
    cout << "L";
  for(int i = 0; i < height+1; i ++)
    cout << "U";
  for(int i = 0; i < width+1; i ++)
    cout << "R";

  cout << "D";
  cout << "R";

  for(int i = 0; i < height+1; i ++)
    cout << "D";
  for(int i = 0; i < width+1; i ++)
    cout << "L";

  cout << "U";
  cout << endl;

  return 0;
}
