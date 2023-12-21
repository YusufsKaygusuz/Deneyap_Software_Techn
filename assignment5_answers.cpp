// Assignment 5 Question 1

#include <iostream>
using namespace std;

// Fonksiyon tanımı
int kalanBul(int sayi1, int sayi2) {
    if (sayi1 > sayi2) {
        return sayi1 % sayi2;
    } else {
        return sayi2 % sayi1;
    }
}

int main() {
    int a, b;
    cout << "İlk Sayıyıyı giriniz: ";
    cin >> a;
    cout << "İkinci sayıyıyı giriniz: ";
    cin >> b;

    int sonuc = kalanBul(a, b);
    cout << "Büyük sayının küçüğe bölümünden kalan: " << sonuc << std::endl;

    return 0;
}

// Assignment 5 Question 2

#include <iostream>
using namespace std;

#include <iostream>
// Fonksiyon tanımı
int notToplami(int notlar[], int n) {
    int toplam = 0;
    for (int i = 0; i < n; i++) {
        if (notlar[i] > 0) {  // Sıfırdan büyük notları kontrol et
            toplam += notlar[i];
        }
    }
    return toplam;
}

int main() {
    int notlar[] = {65, 85, 0, 72, 0, 90};  // Örnek not dizisi
    // n = 32 / 4
    int n = sizeof(notlar) / sizeof(notlar[0]);
    // Dizi uzunluğunu hesapla
     
    cout << sizeof(int) << endl;
    cout << n << endl;
    cout << sizeof(notlar[0]) << endl;
    
    int sonuc = notToplami(notlar, n);
    cout << "Sıfırdan büyük öğrencilerin aldığı notların toplamı: " << sonuc << endl;

    return 0;
}

// Assignment 5 Question 3
// --> Kodun sonuc degeri = 5 olmalı
#include <iostream>
using namespace std;

int sayi=2;
void fonksiyon1()
{
sayi = 5;
}
void fonksiyon2()
{
int sayi = 7;
}
int main()
{
fonksiyon1();
fonksiyon2();
cout << sayi;
}

// Assignment 5 Question 4
#include <iostream>
using namespace std;

class Bahce {
private:
    double kenarUzunlugu;  // Kare şeklindeki bahçenin kenar uzunluğu
public:
    // Constructor
    Bahce(double kenar) {
        kenarUzunlugu = kenar;
    }
    // Alanı hesaplayan metot
    double alanHesapla() {
        return kenarUzunlugu * kenarUzunlugu;
    }

    // Çevreyi hesaplayan metot
    double cevreHesapla() {
        return 4 * kenarUzunlugu;
    }

    // Kenar uzunluğunu değiştiren metot
    void kenarUzunluguDegistir(double yeniKenar) {
        kenarUzunlugu = yeniKenar;
    }
};

// Dışarıda tanımlanan fonksiyonlar

void bahceBilgileriniYazdir(Bahce b) {
    cout << "Bahçenin Alanı: " << b.alanHesapla() << " birim kare" << endl;
    cout << "Bahçenin Çevresi: " << b.cevreHesapla() << " birim" << endl;
}

int main() {
    double kenar1, kenar2;
    cout << "1. bahçenin kenar uzunluğunu girin: ";
    cin >> kenar1;

    cout << "2. bahçenin kenar uzunluğunu girin: ";
    cin >> kenar2;

    Bahce bahce1(kenar1);
    Bahce bahce2(kenar2);

    cout << "1. Bahçe Bilgileri:" << endl;
    bahceBilgileriniYazdir(bahce1);

    cout << "\n2. Bahçe Bilgileri:" << endl;
    bahceBilgileriniYazdir(bahce2);

    return 0;
}




