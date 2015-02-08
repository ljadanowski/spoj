#include <iostream>
#include <cmath>
using namespace std;
typedef struct {
  int czas_zjedzenia_paczka;
  int ilosc_w_ciagu_doby;
}Obzartuch;
int main()
{
  const int doba = 24 *3600;
  unsigned int N, t, i, suma=0;
  unsigned long int M;
  Obzartuch *wsk;
  cin >> t;
  while(t--)
  {
    cin >> N >> M;
    wsk = new Obzartuch[N];
    for(i=0; i<N; i++) 
      cin >> wsk[i].czas_zjedzenia_paczka;
    for(i=0; i<N; i++)   
      wsk[i].ilosc_w_ciagu_doby = doba/wsk[i].czas_zjedzenia_paczka;
    for(i=0; i<N; i++)
      suma += wsk[i].ilosc_w_ciagu_doby;
    cout << ceil( 1.0*suma/(M*1.0)) << endl;
    suma = 0;
  }
}
