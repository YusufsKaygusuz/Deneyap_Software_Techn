//Example 7.1
#include <iostream>

// Fonksiyon tanımı
void selamVer() {
    std::cout << "Merhaba, dünya!" << std::endl;
}

int main() {
    // Fonksiyonu çağırma
    selamVer();

    return 0;
}




//Example 7.2
#include <iostream>

// Fonksiyon tanımı
void sayilariYazdir(int baslangic, int bitis) {
    for (int i = baslangic; i <= bitis; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Fonksiyonu çağırma
    sayilariYazdir(1, 10);

    return 0;
}



//Example 7.3
#include <iostream>
#include <cmath>

// Karekök alma fonksiyonu
double karekokAl(double sayi) {
    return sqrt(sayi);
}

// Üstel işlem fonksiyonu
double ustele(double taban, double us) {
    return pow(taban, us);
}

int main() {
    // Hesaplamaları yapmak için kullanıcıdan giriş alalım
    double sayi, us;

    std::cout << "Karekök almak istediğiniz sayıyı girin: ";
    std::cin >> sayi;

    // Karekök alma fonksiyonunu çağırma
    double karekok = karekokAl(sayi);
    std::cout << "Karekök: " << karekok << std::endl;

    std::cout << "Üstel işlem yapmak istediğiniz tabanı girin: ";
    std::cin >> sayi;

    std::cout << "Üssü girin: ";
    std::cin >> us;

    // Üstel işlem fonksiyonunu çağırma
    double sonuc = ustele(sayi, us);
    std::cout << "Üstel İşlem Sonucu: " << sonuc << std::endl;

    return 0;
}




//Example 7.4
#include <iostream>

// Üçgen alanı hesaplayan fonksiyon
double ucgenAlani(double taban, double yukseklik) {
    return (taban * yukseklik) / 2.0;
}

int main() {
    // Örnek değerler
    double tabanKenar = 2.0;
    double yukseklik = 4.0;

    // Üçgen alanını hesapla
    double alan = ucgenAlani(tabanKenar, yukseklik);

    // Sonucu ekrana yazdır
    std::cout << "Üçgen Alanı: " << alan << " cm^2" << std::endl;

    return 0;
}



//Example 7.5

#include <iostream>

void en_buyuk(int dizi[5]) {
    int enbuyuk = dizi[0];
    for (int i = 1; i < 5; i++) {
        if (enbuyuk < dizi[i])
            enbuyuk = dizi[i];
    }

    // Sonucu ekrana yazdır
    std::cout << "Dizinin en büyük elemani: " << enbuyuk << std::endl;
}

int main() {
    // Örnek bir dizi
    int ornekDizi[] = {5, 12, 3, 8, 7};

    // Fonksiyonu çağırarak en büyük elemanı bul
    en_buyuk(ornekDizi);

    return 0;
}
