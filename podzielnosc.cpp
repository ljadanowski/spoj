#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t, n, i, x, y;
  cin >> t;
  while(t--)
  {
    cin >> n >> x >> y;
    for(i=1; i<n; i++)
    { 
      if( i%x == 0 && i%y != 0 )
        cout << i << " ";
    }
    cout << "\n";
  }
}  
