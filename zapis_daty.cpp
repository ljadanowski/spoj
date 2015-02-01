#include <iostream>
#include <string>
using namespace std;

int main()
{
  char litery[] = {'a','b','c','d','e','f','g','h','i','k',
  		   'l','m','n','o','p','q','r','s','t','v',
		   'x','y','z'};
  int liczby[] =  {1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,
  		   100,200,300,400,500};
  string tekst;
  cin >> tekst;
  unsigned int i;
  int wynik = 0, indeks = 0;
  for(i=0; i<tekst.length(); i++)
  {
    while(indeks++)
    if(litery[indeks] == tekst.at(i)) break;
    wynik += liczby[indeks];
    indeks = 0;
  }
  cout << wynik << endl;
}
