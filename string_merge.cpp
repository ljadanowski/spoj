#include <iostream> 
#include <cstring>  
using namespace std;  
#define T_SIZE 1001  
char* string_merge(char *, char *);  

int main()
{   
  int t;    
  char S1[T_SIZE], S2[T_SIZE], *S;    
  cin >> t; /* wczytaj liczbę testów */   
  while(t--)
  {  
    cin >> S1; cin >> S2;
    S=string_merge(S1,S2);     
    cout << S << endl;     
    delete[] S;     
  }     
  return 0; 
} 
char* string_merge(char *s1, char *s2)
{
  int dlugosc1 = 0, dlugosc2 = 0, min, i, k = 0;
  while(*(s1+dlugosc1) != '\0')
    dlugosc1++;
  while(*(s2+dlugosc2) != '\0')
    dlugosc2++;
  min = dlugosc1 < dlugosc2 ? dlugosc1 : dlugosc2;
  char *wsk = new char[2*min];
  for(i=0; i<min; i++){
    wsk[k++] = s1[i];
    wsk[k++] = s2[i];
  }
  return wsk;
}
