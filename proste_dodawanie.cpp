#include <iostream>
using namespace std;

int main()
{
  int t, n, liczba, wynik = 0;
  cin >> t;
  cin >> n;
  while(t--) {
	while(n--) {
		cin >> liczba;
		wynik += liczba;
	}
    cout << wynik << endl;
    cin >> n;
    wynik = 0;
  }
}
