#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef struct {
  string nazwa;
  int x;
  int y;
  double odleglosc;
} Punkt;
int main()
{
  int i, t, n, j;
  Punkt *punkt, tymczasowy;
  cin >> t;
  while(t--)
  {
    cin >> n;
    punkt = new Punkt[n];
    for(i=0; i<n; i++)
      cin >> punkt[i].nazwa >> punkt[i].x >> punkt[i].y;
    for(i=0; i<n; i++) 
      punkt[i].odleglosc = sqrt(pow(punkt[i].x, 2) + pow(punkt[i].y, 2));
    
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    if(punkt[i].odleglosc > punkt[j].odleglosc) {
      tymczasowy = punkt[i];
      punkt[i] = punkt[j];
      punkt[j] = tymczasowy;
    }
    for(i=0; i<n; i++)
    cout << punkt[i].nazwa << " " << punkt[i].x << " " << punkt[i].y << endl;
  }
}
