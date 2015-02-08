#include <iostream>
using namespace std;

int main()
{
  int t, n, i;
  int *wsk;
  cin >> t;
  while(t--)
  {
    cin >> n;
    wsk = new int[n];
    for(i=0; i<n; i++) cin >> wsk[i];
    for(i=n-1; i>=0; i--) cout << wsk[i] << " ";
    cout << endl;
  }
}
