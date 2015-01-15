#include <stdio.h>
#include <stdlib.h>
void czy_pierwsza(int liczba);
int main() 
{
  int n, i = 0, pom;
  while(scanf("%d", &n) != 1 || n > 100000 )
  continue;
 
  int *wsk = (int*) malloc(sizeof(int)*n);
  
  while(i<n)
  {
	  scanf("%d", &pom);
	  if(pom >= 1 && pom <= 10000) wsk[i++] = pom;
  }

  for(i=0; i<n; i++) czy_pierwsza(wsk[i]);
  
  return 0;
}
void czy_pierwsza(int liczba)
{
  int i;
  if(liczba<2) puts("NIE");
  else if(liczba == 1) puts("TAK");
  else 
  {
    for(i=2; i<liczba; i++) 
    {
      if(liczba%i == 0) { puts("NIE"); break; }
      else if(liczba == i+1) { puts("TAK"); break; }
    }
  } 
}

