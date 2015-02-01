#include <iostream>
using namespace std;

int main()
{
  int t, k, w, c;
  cin >> t;
  //k = c*w
  while(t--)
  {
    cin >> c >> k >> w;
    if(k >= c*w) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
