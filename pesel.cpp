#include <iostream>
#include <string>
using namespace std;

int main()
{
  string pesel;
  int tab[11], i, t, suma=0;
  cin >> t;
  while(t--) {
  	cin >> pesel;
  	for(i=0; i<11; i++)
  	tab[i] = pesel.at(i)-48;
	suma = tab[0]*1+tab[1]*3+tab[2]*7+tab[3]*9+tab[4]*1+
	+tab[5]*3+tab[6]*7+tab[7]*9+tab[8]*1+tab[9]*3+tab[10]*1;
	if(suma<=0) {cout <<"N"<<endl;}
	else if(suma%10 != 0) cout << "N" << endl;
	else cout << "D" << endl;
  }
}
