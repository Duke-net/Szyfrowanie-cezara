#include <iostream>
#include <string>

using namespace std;

void Funkcja2(int klucz, char wyraz[]);

int main()
{
    int klucz;
    char wyraz[200];
    
    cout << "Podaj klucz: ";
    cin >> klucz;
    cout << "Podaj wyraz: ";
    cin >> wyraz;

    Funkcja2(klucz, wyraz);
    cout << "Zaszyfrowany wyraz: " << wyraz << endl;

    Funkcja2(-klucz, wyraz);
    cout << "Rozszyfrowany wyraz: " << wyraz;
}

void Funkcja2(int klucz, char wyraz[]) {
    int dlugosc = strlen(wyraz);
    if (!(klucz >= -26 && klucz <= 26)) {
        return;
    }
    if (klucz >= 0) {
        for (int i = 0; i < dlugosc; i++) {
            if (wyraz[i] + klucz <= 'z') {
                wyraz[i] += klucz;
            }
            else
            {
                wyraz[i] = wyraz[i] + klucz - 26;
            }
        }
    }
    else
    {
        for (int i = 0; i < dlugosc; i++) {
            if (wyraz[i] + klucz >= 'a') {
                wyraz[i] += klucz;
            }
            else
            {
                wyraz[i] = wyraz[i] + klucz + 26;
            }
        }
    }
}
