#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n;
  vector<string> w(100);

  cin >> n;

  for(int i = 0; i < n; i ++)
    cin >> w.at(i);

  char temp;
  vector<string> a(100);
  int j = 0;

  for(int i = 0; i < n; i ++){
    if(i == 0){
      temp = w.at(i).back();
      a.at(j) = w.at(i);
      j ++;
    }
    else{
      for(int k = 0; k < j; k ++){
        if(a.at(k) == w.at(i)){
          cout << "No" << endl;
          return 0;
        }
      }
      if(w.at(i).front() != temp){
        cout << "No" << endl;
        return 0;
      }
      temp = w.at(i).back();
      a.at(j) = w.at(i);
      j ++;
    }
  }

  cout << "Yes" << endl;

  return 0;
}

