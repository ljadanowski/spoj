#include <iostream>
using namespace std;

int main()
{
  int n, poszukiwana, ilosc=0, i;
  int *ciag;
  while(cin >> poszukiwana) 
  {
    cin >> n;
    ciag = new int[n];
    for(i=0; i<n; i++) cin >> ciag[i];
    for(i=0; i<n; i++) 
      if(poszukiwana == ciag[i]) ilosc++;
    cout << ilosc << endl;
    ilosc=0;
  }
}
