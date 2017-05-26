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
    float saldo[50];
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;

    datotekaUcitavanje.open("banka.txt");
    while ( 1 )
    {
        datotekaUcitavanje >> brRacuna[brojKlijenata];
        if( datotekaUcitavanje.eof() == true )
            break;
        datotekaUcitavanje.ignore();
        getline(datotekaUcitavanje, prezimeIme[brojKlijenata]);
        datotekaUcitavanje >> saldo[brojKlijenata];
        brojKlijenata++;
    }
    datotekaUcitavanje.close();

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
            cout << "Unesite broj racuna: ";
            cin >> brRacuna[brojKlijenata];
            cout << "Unesite ime i prezime: ";
            cin.ignore();
            getline(cin, prezimeIme[brojKlijenata]);
            cout << "Unesite saldo: ";
            cin >> saldo[brojKlijenata];

            datotekaUpisivanje.open("banka.txt", ios::app);
            datotekaUpisivanje << brRacuna[brojKlijenata] << endl << prezimeIme[brojKlijenata] << endl << saldo[brojKlijenata] << endl;
            datotekaUpisivanje.close();

            brojKlijenata++;
        }
        else if( izbor == 2 )
        {
            for( int i = 0; i < brojKlijenata; i++ )
            {
                cout << brRacuna[i] << " " << prezimeIme[i] << " " << saldo[i] << endl;
            }
        }
        else if( izbor == 3 )
        {
            unsigned long long int brRacunaPretraga;
            cout << "Unesite broj racuna kojeg zelite pronaci: ";
            cin >> brRacunaPretraga;
            bool pronadjeno = false;
            for( int i = 0; i < brojKlijenata; i++ )
            {
                if( brRacuna[i] == brRacunaPretraga )
                {
                    cout << brRacuna[i] << " " << prezimeIme[i] << " " << saldo[i] << endl;
                    pronadjeno = true;

                    cout << "Unesite novi saldo: ";
                    cin >> saldo[i];
                }
            }
            if( pronadjeno == false )
            {
                cout << "Trazeni racun nije pronadjen." << endl;
            }
            else
            {
                datotekaUpisivanje.open("banka.txt");
                for( int i = 0; i < brojKlijenata; i++ )
                {
                    datotekaUpisivanje << brRacuna[i] << endl << prezimeIme[i] << endl << saldo[i] << endl;
                }
                datotekaUpisivanje.close();
            }
        }
        else if( izbor == 4 )
        {
            string imePrezimePretraga;
            cout << "Unesite ime i prezime koje zelite pronaci: ";
            cin.ignore();
            getline(cin, imePrezimePretraga);
            bool pronadjeno = false;
            for( int i = 0; i < brojKlijenata; i++ )
            {
                if( prezimeIme[i] == imePrezimePretraga )
                {
                    cout << brRacuna[i] << " " << prezimeIme[i] << " " << saldo[i] << endl;
                    pronadjeno = true;
                }
            }
            if( pronadjeno == false )
            {
                cout << "Trazeni racun osobe nije pronadjen.." << endl;
            }
        }
        else if( izbor == 5 )
        {
            bool swapped = true;
            int j = 0;
            unsigned long long int tmp_brRacuna;
            string tmp_prezimeIme;
            float tmp_saldo;
            while (swapped)
            {
                swapped = false;
                j++;
                for (int i = 0; i < brojKlijenata - j; i++)
                {
                    if ( prezimeIme[i] > prezimeIme[i + 1] )
                    {
                        tmp_brRacuna = brRacuna[i];
                        brRacuna[i] = brRacuna[i + 1];
                        brRacuna[i + 1] = tmp_brRacuna;
                        tmp_prezimeIme = prezimeIme[i];
                        prezimeIme[i] = prezimeIme[i + 1];
                        prezimeIme[i + 1] = tmp_prezimeIme;
                        tmp_saldo = saldo[i];
                        saldo[i] = saldo[i + 1];
                        saldo[i + 1] = tmp_saldo;

                        swapped = true;
                    }
                }
            }
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
