#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int brojKlijenata = 0;
    int izbor;
    int MAX = 50;
    unsigned long long int brRacuna[MAX];
    string prezimeIme[MAX];
    float saldo[MAX];
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;

    datotekaUcitavanje.open("banka.txt");
    while ( 1 )
    {
        if( datotekaUcitavanje.eof() == true )
            break;

    }
    datotekaUcitavanje.close();

    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos nove osobe" << endl;
        cout << "2. Ispisi podatke" << endl;
        cout << "3. Pretraga prema racunu" << endl;
        cout << "4. Pretraga prema prezimenu i imenu" << endl;
        cout << "5. Izmjena salda prema broju racuna" << endl;
        cout << "6. Ispisi sortirano prema prezimenu i imenu" << endl;
        cout << "7. Izlaz iz programa" << endl;
        cout << "Upisite broj iz izbornika: ";
        cin >> izbor;
        if( izbor == 1 )
        {
            cin.ignore();
            getline(cin, prezimeIme[brojKlijenata]);
          
            brojKlijenata++;
        }
        else if( izbor == 2 )
        {
            cout << "broj racuna" << "\t" << "prezime i ime" << "\t" << "saldo" << endl;
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
            
        }
        else if( izbor == 7 )
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
