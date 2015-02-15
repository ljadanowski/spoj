#include <iostream>
using namespace std;

int main()
{
  int n, t, i;
  int *tab;
  cin>>t;
  while(t--)
  {
    cin>>n;
    tab = new int[n];
    for(i=0; i<n; i++) cin>>tab[i];
    int max = tab[0];
    for(i=1; i<n; i++) 
    if(tab[i]>max) max = tab[i];

  }
}
