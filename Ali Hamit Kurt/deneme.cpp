#include <iostream>

int main() {

    using namespace std; 

    double sayi1, sayi2; 
    char islem;         

    cout << "\nIlk sayiyi girin: ";
    cin >> sayi1;

  
    cout << "Islemi girin (+, -, *, /): ";
    cin >> islem;

    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;
    
     switch (islem) {
        case '+': 
            cout << "Sonuc: " << sayi1 << " + " << sayi2 << " = " << (sayi1 + sayi2) << endl;
            break; 


        case '-': 
            cout << "Sonuc: " << sayi1 << " - " << sayi2 << " = " << (sayi1 - sayi2) << endl;
            break;

        case '*': 
            cout << "Sonuc: " << sayi1 << " * " << sayi2 << " = " << (sayi1 * sayi2) << endl;
            break;

        case '/': 
           
            if (sayi2 == 0) {
                cout << "Hata! Bir sayiyi 0'a bolemezsiniz." << endl;
            } else {
                cout << "Sonuc: " << sayi1 << " / " << sayi2 << " = " << (sayi1 / sayi2) << endl;
            }
            break;

        default: 
            cout << "Hata! Gecersiz bir islem girdiniz." << endl;
            break;
    }

    return 0; 

}
