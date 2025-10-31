#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;

    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "İkinci sayiyi girin: ";
    cin >> sayi2;

    cout << "Yapmak istediginiz islemi secin (+ veya -): ";
    cin >> islem;

    double sonuc;

    if (islem == '+') {
        sonuc = sayi1 + sayi2;
    } else if (islem == '-') {
        sonuc = sayi1 - sayi2;
    } else {
        cout << "Gecersiz islem secimi!" << endl;
        return 1; 
    }

    cout << "Sonuc: " << sonuc << endl;

    return 0;
}
