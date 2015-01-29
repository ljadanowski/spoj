#include <iostream>
using namespace std;

int main()
{
  int n = 3, liczba, wynik = 0;
  while(n--)
  {
    cin >> liczba;
    wynik += liczba;
  }
  cout << wynik << endl;
}
