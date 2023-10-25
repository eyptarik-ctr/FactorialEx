#include <iostream>
using namespace std;
int main() {
    int number , faktoriel = 1;
    cout << "faktoriyelini almak istediginiz sayiyi girin" << endl;
    cin >> number;
    while (number > 0)
    {
        faktoriel *= number;
        number --;

    }
    cout << "sayinizin faktoriyeli " << faktoriel << endl ;

    return 0;
}
