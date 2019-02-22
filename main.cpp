#include <iostream>
#include <fstream>

using namespace std;

string name, surname, phonenumber;

int main()
{
    fstream notes;
    notes.open("dane.txt", ios::in);

    string line;
    int line_nr = 1;

    if(notes.good()==false) cout << "blad pliku";
    else
    {
        while (getline(notes,line))
        {
            switch(line_nr)
            {
            case 1: name = line; break;
            case 2: surname = line; break;
            case 3: phonenumber = line; break;
            }
        line_nr++;
        }
    }

    notes.close();

    cout << "Imie: " << name << endl;
    cout << "Nazwisko: " << surname << endl;
    cout << "Numer: " << phonenumber << endl;


    return 0;
}
