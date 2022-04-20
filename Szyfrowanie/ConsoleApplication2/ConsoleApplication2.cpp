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
    cout << wyraz;
}

void Funkcja2(int klucz, char wyraz[]) {
    int dlugosc = strlen(wyraz);
    if (!(klucz >= -26 && klucz <= 26)) {
        return;
    }
    if (klucz >= 0) {
        for (int i = 0; i < dlugosc; i++) {
            if (wyraz[1] + klucz <= 'z') {
                wyraz[1] += klucz;
            }
            else
            {
                wyraz[1] = wyraz[1] + klucz - 26;
            }
        }
    }
    else
    {
        for (int i = 0; i < dlugosc; i++) {
            if (wyraz[1] + klucz >= 'a') {
                wyraz[1] += klucz;
            }
            else
            {
                wyraz[1] = wyraz[1] + klucz + 26;
            }
        }
    }
}
