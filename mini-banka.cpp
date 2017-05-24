#include<iostream>
using namespace std;

int main()
{
    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos nove osobe" << endl;
        cout << "2. Ispisi podatke" << endl;
        cout << "3. Pretraga prema racunu" << endl;
        cout << "4. Pretraga prema prezimenu i imenu" << endl;
        cout << "5. Ispisi sortirano prema prezimenu i imenu" << endl;
        cout << "6. Izlaz iz programa" << endl;
        int izbor;
        int brojKlijenata = 0;
        int MAX = 50;
        cout << "Upisite broj iz izbornika: " << endl;
        cin >> izbor;
        if( izbor == 1 )
        {
        }
        else if( izbor == 2 )
        {
        }
        else if( izbor == 3 )
        {
        }
        else if( izbor == 4 )
        {
        }
        else if( izbor == 5 )
        {
        }
        else if( izbor == 6 )
        {
            cout << "Kraj rada" << ednl;
            break;
        }
        else
        {
            cout << "Unijeli ste krivi broj." << endl;
        }
    }
}
