#include <iostream>

using namespace std;

int main()
{



    float a,b;
    float sum, iloczyn, iloraz, roznica,pole_p,obwod_p;
do{

    cout <<"Podaj bok a(wartosc dodatnia)"<< endl;
    cin >> a;
}while (a<=0);


    cout<<"**** obliczeia ****"<<endl;

    pole_p= a*b;
    cout <<"Pole wynosi:... "<< pole_p <<endl;



   obwod_p=2*a+2*b;
    cout << "Obwod wynosi:..."<< obwod_p << endl;




    return 0;
}
