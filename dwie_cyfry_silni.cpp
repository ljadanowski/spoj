#include <iostream>
using namespace std;

int main()
{
  unsigned long long int wynik = 1;
  int i, n, t;
  cin >> t;
  while(t--) {
    cin >> n;
    for(i=1; i<=n; i++) wynik *= i;
    if(wynik >= 100) cout << wynik/10 << " 0" << endl;
    else
    cout << wynik/10 << " " << wynik-(wynik/10)*10 << endl;  
    wynik = 1;
  }
}
