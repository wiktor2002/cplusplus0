#include <iostream>

using namespace std;

int main()
{
    float x, y;
    float sum, iloczyn, iloraz, roznica;



    cout <<"Podaj pierwsza liczbe:" << endl;
    cin>> x;
    cout << "Podaj druga liczbe:" << endl;
    cin>> y;




    sum = x + y;
    cout << "Suma wynosi:" << sum << endl;
    roznica = x - y;
    cout << "Roznica wynosi:" << roznica <<endl;
    iloczyn = x * y;
    cout << "iloczyn wynosi:" << iloczyn <<endl;
    iloraz = x / y;
    cout << "Iloraz wynosi:" << iloraz <<endl;
    return 0;
}
