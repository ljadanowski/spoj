#include <iostream>
using namespace std;

int main()
{
    int k, n, i, j, temp;
    int *wsk;
    cin >> n;
    cin >> k;
    wsk = new int[n];
    for(i=0; i<n; i++) cin >> wsk[i];
    for(j=0; j<k; j++) {
    temp = wsk[0];
    for(i=1; i<n; i++) wsk[i-1] = wsk[i];
    wsk[n-1] = temp;
    }
    for(i=0; i<n; i++) cout << wsk[i] << " ";
    cout << "\n";
}
