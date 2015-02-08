#include <iostream>
using namespace std;

int main()
{
  int ilosc = 0, tab[100], liczba;
  while(cin>>liczba)
    tab[ilosc++] = liczba;
  int i;
  for(i=ilosc-1; i>=0; i--)
  cout << tab[i] << " ";
  cout << endl;
}
