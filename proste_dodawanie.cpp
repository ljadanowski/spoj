#include <iostream>
using namespace std;

int main()
{
  int t, n, liczba, wynik = 0;
  cin >> t;
  cin >> n;
  while(n--) {
	while(t--) {
		cin >> liczba;
		wynik += liczba;
	}
  cout << wynik << endl;
  }
}
