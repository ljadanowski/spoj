#include <iostream>
using namespace std;

int main()
{
  int a, b, N, ilosc = 10;
  cin >> N;
  while(N--)
  {
    cin >> a >> b;
    while(ilosc%a != 0 || ilosc%b !=0)
    ilosc++;
    cout << ilosc << endl;
    ilosc = 10;
  }
}
