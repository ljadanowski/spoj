#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    int przerwy[600];
    int godziny, minuty, i=0, x, n;
    string godzina;
    cin >> godzina;
    //cout << godzina.substr(0, 2);
    //cout << godzina.substr(3, 4);
    godziny = atoi(godzina.substr(0, 2).c_str());
    minuty = atoi(godzina.substr(3, 4).c_str());
    //cout << "godziny: " << godziny << " minuty: " <<minuty << endl;

    przerwy[i++] = 0;
    while(cin >> x)
    przerwy[i++] = x;

    n = i;
    for(i=0; i<n; i++)
    {
        godziny += (minuty+45)/60;
        minuty = (minuty+45)%60;
        cout << godziny << ":" << minuty << " ";
        godziny += (minuty+przerwy[i])/60;
        minuty = (minuty+przerwy[i])%60;
        cout << godziny <<":" << minuty << " ";
    }
    cout << "\n";
    //system("pause");
}
