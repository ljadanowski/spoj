#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t, n, i = 0, x, y;
  string *nazwa;
  cin >> t;
  while(t--)
  {
    cin >> n;
    nazwa = new string[n];
    int *wspolrzedne = new int[n][2];
    cin >> nazwa[i] >> x >> y;
    wspolrzedne[i][0] = x; wspolrzedne[i][1];
    i++;
  }
  for(i=0; i<n; i++) 
  cout << nazwa[i] << " " << wsporzedne[i][0] << " " << wspolrzedne[i][1] << endl;
}
