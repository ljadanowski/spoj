#include <iostream>
using namespace std;

int main()
{
  int m, n, i, j;
  cin >> n >> m;
  int tab[n][m];

  for(i=0; i<n; i++)
     for(j=0; j<m; j++)
       cin >> tab[i][j];
  cout << "===========================" << endl;  
  for(j=0; j<m; j++){
     for(i=0; i<n; i++)
	  cout << tab[i][j] << " ";
	}
     cout << endl;
}
