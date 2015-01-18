#include <iostream>
using namespace std;
unsigned long int silnia(int liczba) {
  unsigned long int wynik = 1;
  int i;
  for(i=1; i<=liczba; i++) wynik *= i;
  return wynik;
}
void zlicz(int liczba) {
  unsigned long int n = silnia(liczba);
  cout << n/10 << " " << n-(n/10)*10 << endl;
}
int main()
{
  int n, t;
  cin >> t;
  while(t--) {
    cin >> n;
    zlicz(n);
  }
  
}
