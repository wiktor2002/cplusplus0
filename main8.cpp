#include <iostream>

using namespace std;

float modul(float argument)
{
float wynik;

if(argument>=0)
    wynik=argument;
else
    wynik =-argument;

    return wynik;
}

int main()
{
    float x,eart_bezwzgledna;

    cout<<"Podaj liczbe rzeczywista.."<<endl;
    cin>>x;
    wart_bezwzgledna = modul(x);
    cout<<"Wartosc bezwzgledna liczby..."<<wart_bezwzgledna<<endl;

    return 0;
}
