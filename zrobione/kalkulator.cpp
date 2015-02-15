#include <iostream>
using namespace std;
typedef struct {
char operator1;
int liczba1;
int liczba2;
}Kalkulator;
int main()
{
Kalkulator kalkulator;
while(cin >> kalkulator.operator1)
{
cin >> kalkulator.liczba1;
cin >> kalkulator.liczba2;
if(kalkulator.operator1 == '+')
cout << kalkulator.liczba1+kalkulator.liczba2 << endl;
else if(kalkulator.operator1 == '-')
cout << kalkulator.liczba1-kalkulator.liczba2 << endl;
else if(kalkulator.operator1 == '*')
cout << kalkulator.liczba1*kalkulator.liczba2 << endl;
else if(kalkulator.operator1 == '/')
cout << kalkulator.liczba1/kalkulator.liczba2 << endl;
else if(kalkulator.operator1 == '%')
cout << kalkulator.liczba1%kalkulator.liczba2 << endl;
}
}
