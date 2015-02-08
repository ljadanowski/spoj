#include <iostream>
#include <string>
using namespace std;
typedef struct osoba {
  string imie;
  int waga;
  int wzrost;
  double bmi;
} Osoba;

int main()
{
  int n, i;
  cin >> n;
  Osoba *wsk = new Osoba[n];
  for(i=0; i<n; i++)
    cin >> wsk[i].imie >> wsk[i].waga >> wsk[i].wzrost;
  for(i=0; i<n; i++) 
    wsk[i].bmi = wsk[i].waga/(wsk[i].wzrost*wsk[i].wzrost/10000.0);
  
  cout << "niedowaga" << endl;
  for(i=0; i<n; i++) 
    if(wsk[i].bmi < 18.5) 
      cout << wsk[i].imie << "\n" << endl;
  cout << "wartosc prawidlowa" << endl;	
  for(i=0; i<n; i++) 
    if(wsk[i].bmi >= 18.5 && wsk[i].bmi < 25) 
      cout << wsk[i].imie << "\n" << endl;
  cout << "nadwaga" << endl;
  for(i=0; i<n; i++) 
    if(wsk[i].bmi >= 25) 
      cout << wsk[i].imie << "\n" << endl;
}
