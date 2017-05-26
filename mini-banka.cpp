#include<iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
    // ispis glavnog izbornika
    cout << "Glavni izbornik" << endl;
    cout << "1. Unos nove osobe" << endl;
    cout << "2. Ispisi podatke" << endl;
    cout << "3. pretraga prema racunu" << endl;
    cout << "4. Pretraga prema prezimenu" << endl;
    cout << "5. Ispisi sortirano" << endl;
=======
    int brojKlijenata = 0;
>>>>>>> 8de8b0682c9b8a2053249c2fbdb3c7cd9f83edb4
    int izbor;
    int MAX = 50;
    string prezimeIme[MAX];

    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos nove osobe" << endl;
        cout << "2. Ispisi podatke" << endl;
        cout << "3. Pretraga prema racunu" << endl;
        cout << "4. Pretraga prema prezimenu i imenu" << endl;
        cout << "5. Ispisi sortirano prema prezimenu i imenu" << endl;
        cout << "6. Izlaz iz programa" << endl;
        cout << "Upisite broj iz izbornika: ";
        cin >> izbor;
        if( izbor == 1 )
        {
            cout << "Unesite ime i prezime: ";
            cin.ignore();
            getline(cin, prezimeIme[brojKlijenata]);
            brojKlijenata++;
        }
        else if( izbor == 2 )
        {
            for( int i = 0; i < brojKlijenata; i++ )
            {
                cout << prezimeIme[i] << endl;
            }
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
            cout << "Kraj rada" << endl;
            break;
        }
        else
        {
            cout << "Unijeli ste krivi broj." << endl;
        }
        cout << endl;
    }
}
