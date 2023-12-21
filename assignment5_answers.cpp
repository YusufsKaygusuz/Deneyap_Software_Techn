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


// Assignment 5 Question 5

#include <iostream>
using namespace std;

class DaireHavuz {
private:
    double yaricap;  // Daire havuzunun yarıçapı

public:
    // Constructor
    DaireHavuz(double r){
        yaricap = r;
    }

    // Alanı hesaplayan metot
    double alanHesapla() {
        return 3.14 * yaricap * yaricap;
    }

    // Yarıçapı değiştiren metot
    void yaricapDegistir(double yeniYaricap) {
        yaricap = yeniYaricap;
    }

    // Yarıçapı getiren metot
    double getYaricap() const {
        return yaricap;
    }
};

int main() {
    double yaricap1, yaricap2;

    cout << "1. Havuz için yarıçap girin: ";
    cin >> yaricap1;

    cout << "2. Havuz için yarıçap girin: ";
    cin >> yaricap2;

    DaireHavuz havuz1(yaricap1);
    DaireHavuz havuz2(yaricap2);

    cout << "\n1. Havuz Alanı: " << havuz1.alanHesapla() << " birim kare" << endl;
    cout << "   Havuzun Yarıçapı: " << havuz1.getYaricap() << " birim" << endl;

    cout << "\n2. Havuz Alanı: " << havuz2.alanHesapla() << " birim kare" << endl;
    cout << "   Havuzun Yarıçapı: " << havuz2.getYaricap() << " birim" << endl;

    return 0;
}



// Assignmet 5 Question 6

#include <iostream>
using namespace std;

bool asalMi(int sayi) {
    // 1 veya 2'den küçük olan sayılar asal değildir
    if (sayi <= 1) return false;
    if (sayi == 2) return true;

    // 2'den başlayarak sayının yarısına kadar olan sayılarla bölünüp bölünmediğini kontrol et
    for (int i = 2; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            return false;  // Sayı, i'ye tam bölünüyorsa asal değildir
        }
    }
    return true;  // Eğer hiçbiriyle tam bölünmüyorsa asaldır
}

int main() {
    int sayi;
    cout << "Bir sayı girin: ";
    cin >> sayi;

    if (asalMi(sayi)) {
        cout << sayi << " bir asal sayıdır." << endl;
    } else {
        cout << sayi << " bir asal sayı değildir." << endl;
    }

    return 0;
}

















