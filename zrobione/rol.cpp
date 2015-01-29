#include <iostream>
using namespace std;

int main()
{
  int t, n, i, temp;
  int *wsk;
  cin >> t;
  while(t--)
  {
    cin >> n;
    wsk = new int[n];
    for(i=0; i<n; i++) cin >> wsk[i];
    temp = wsk[0];
    for(i=1; i<n; i++) wsk[i-1] = wsk[i];
    wsk[n-1] = temp;
    for(i=0; i<n; i++) cout << wsk[i] << " ";
    cout << "\n";
  }
}
