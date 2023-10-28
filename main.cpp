#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    long long  int number, faktoriel = 1;
    cout << "Faktoriyelini almak istediğiniz sayıyı girin: ";
    cin >> number;

    while (number > 0) {
        faktoriel *= number;
        number--;
    }

    int basamakSayisi = 0;
    int temp = faktoriel;
    while (temp > 0) {
        temp /= 10;
        basamakSayisi++;
    }

    cout << "Sayınızın faktoriyeli: " << faktoriel << ", basamak sayısı: " << basamakSayisi << endl;

    return 0;
}
