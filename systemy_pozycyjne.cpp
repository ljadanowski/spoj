#include <iostream>
#include <string>
using namespace std;
void k_hexa(int liczba)
{
  string liczba_t = "";
  int reszta, i;
  do{
    reszta = liczba%16;
    if(reszta == 10) liczba_t += "A";
    else if(reszta == 11) liczba_t += "B";
    else if(reszta == 12) liczba_t += "C";
    else if(reszta == 13) liczba_t += "D";
    else if(reszta == 14) liczba_t += "E";
    else if(reszta == 15) liczba_t += "F";
    else liczba_t += to_string(reszta);
    liczba /= 16;
  } while(liczba > 0);  
  for(i=liczba_t.length()-1; i>=0; i--)
  cout << liczba_t.at(i);
  cout << " ";
}
void k_jed(int liczba)
{
  string liczba_t = "";
  int reszta, i;
  do{
    reszta = liczba%11;
    if(reszta == 10) liczba_t += "A";
    else liczba_t += to_string(reszta);
    liczba /= 11;
  } while(liczba > 0);  
  for(i=liczba_t.length()-1; i>=0; i--)
  cout << liczba_t.at(i);
  cout << endl;
}
int main()
{
  int t, liczba;
  cin >> t;
  while(t--)
  {
    cin >> liczba;
    k_hexa(liczba);
    k_jed(liczba);
  }
  cout << endl;
}
