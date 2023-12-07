#include <iostream>
#include <string>

using namespace std;

class Ogrenci {
public:
    // Default constructor (Parametre almayan constructor)
    Ogrenci() {
        cout << "Default constructor çağrıldı." <<endl;
        ad = "Bilinmiyor";
        yas = 0;
    }

    // Parametre alan constructor
    Ogrenci(string isim, int yil) {
        cout << "Parametre alan constructor çağrıldı." << endl;
        ad = isim;
        yas = 2023 - yil;
    }

    // Destructor (Sınıfın ömrü sona erdiğinde çağrılır)
    ~Ogrenci() {
        cout << "Destructor çağrıldı. " << ad << " objesi yok edildi." << endl;
    }

    // Diğer üye fonksiyonlar
    void BilgileriGoster() const {
        cout << "Ad: " << ad << ", Yas: " << yas << endl;
    }

private:
    std::string ad;
    int yas;
};

int main() {
    // Default constructor çağrılır
    Ogrenci ogrenci1;

    // Parametre alan constructor çağrılır
    Ogrenci ogrenci2("Ahmet", 1995);
    
    // Copy constructor çağrılır
    Ogrenci ogrenci3 = ogrenci2;

    // Nesnenin ömrü sona erdiğinde destructor çağrılır
    return 0;
}
