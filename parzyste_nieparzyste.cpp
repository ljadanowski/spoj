#include <iostream>
#include <string>
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

    for(i=1; i<n; i+=2) cout << wsk[i] << " ";
    for(i=0; i<n; i+=2) cout << wsk[i] << " ";
    cout << "\n";

  }
  cout << "\n";
}
