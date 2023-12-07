// Example 9.1

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


// Example 9.2

#include <iostream>
#include <string>

using namespace std;

class Araba {
public:
    // Default constructor (Parametre almayan constructor)
    Araba() {
        cout << "Default constructor çağrıldı." << endl;
        marka = "Bilinmiyor";
        model = "Bilinmiyor";
        yil = 0;
    }

    // Parametre alan constructor
    Araba(string markaAdi, string modelAdi, int uretimYili) {
        cout << "Parametre alan constructor çağrıldı." << endl;
        marka = markaAdi;
        model = modelAdi;
        yil = uretimYili;
    }

    // Diğer üye fonksiyonlar
    void BilgileriGoster() const {
        cout << "Marka: " << marka << ", Model: " << model << ", Yıl: " << yil << endl;
    }

    // Bilgileri ayarla fonksiyonu
    void BilgileriAyarla(string yeniMarka, string yeniModel, int yeniYil) {
        marka = yeniMarka;
        model = yeniModel;
        yil = yeniYil;
        cout << "Bilgiler güncellendi." << endl;
    }

    // Üretim yılı güncelle fonksiyonu
    void UretimYiliGuncelle(int yeniYil) {
        yil = yeniYil;
        cout << "Üretim yılı güncellendi." << endl;
    }

private:
    string marka;
    string model;
    int yil;
};

int main() {
    // Default constructor çağrılır
    Araba araba1;

    // Parametre alan constructor çağrılır
    Araba araba2("Toyota", "Corolla", 2020);

    // Bilgileri göster
    cout << "Araba 1 Bilgileri: ";
    araba1.BilgileriGoster();

    cout << "Araba 2 Bilgileri: ";
    araba2.BilgileriGoster();

    // Bilgileri ayarla ve tekrar göster
    araba1.BilgileriAyarla("Honda", "Civic", 2022);
    cout << "Araba 1 Güncellenmiş Bilgileri: ";
    araba1.BilgileriGoster();

    // Üretim yılını güncelle ve tekrar göster
    araba2.UretimYiliGuncelle(2021);
    cout << "Araba 2 Güncellenmiş Bilgileri: ";
    araba2.BilgileriGoster();

    return 0;
}

