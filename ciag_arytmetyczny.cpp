#include <iostream>
using namespace std;

int main()
{
  int t, n, i, r;
  int *wsk;
  //an = a1+nr  // n>=0
  //a1 = a0+r
  //a2 = a0+2r
  //a3 = a0+3r
  cin >> t;
  while(t--)
  {
    cin >> n;
    wsk = new int[n];
    for(i=0; i<n; i++) cin >> wsk[i];
    r = wsk[1]-wsk[0];
    for(i=2; i<n; i++)
    {
      if(wsk[i] != wsk[0]+i*r) break;
    }
    cout << i << endl;
  }
}
