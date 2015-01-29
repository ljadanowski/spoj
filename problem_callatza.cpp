#include <iostream>
using namespace std;

int callatz(int s)
{
  if(n == 0) return s;
  else if(n%2 == 0) return 3*callatz(s)+1;
  else if(n%2 == 1) return callatz(s)/2;
}

int main()
{
  int t, s;
  cin >> t;
  while(t--)
  {
    cin >> s;
    callatz(s);
  }
}
