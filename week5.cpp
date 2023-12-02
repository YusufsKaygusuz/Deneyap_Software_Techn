// Example Week 5.1

#include <iostream>

int main() {
    int n;
    int toplam = 0;

    std::cout << "Kac sayinin toplamini hesaplamak istersiniz? ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        int sayi;
        std::cout << "Sayı #" << i << ": ";
        std::cin >> sayi;
        toplam += sayi;
    }

    std::cout << "Girilen " << n << " sayının toplamı: " << toplam << std::endl;

    return 0;
}



// Example Week 5.2

#include <iostream>

int main() {
    int sayi;

    // Kullanıcıdan bir tam sayı girişi al
    std::cout << "Bir tam sayı girin: ";
    std::cin >> sayi;

    // Girilen sayının pozitif, negatif veya sıfır olduğunu kontrol et
    if (sayi > 0) {
        std::cout << "Girilen sayı pozitif bir sayıdır." << std::endl;
    } else if (sayi < 0) {
        std::cout << "Girilen sayı negatif bir sayıdır." << std::endl;
    } else {
        std::cout << "Girilen sayı sıfırdır." << std::endl;
    }

    // Kullanıcıdan bir sayı aralığı girişi al
    int baslangic, bitis;
    std::cout << "Bir başlangıç sayısı girin: ";
    std::cin >> baslangic;
    std::cout << "Bir bitiş sayısı girin: ";
    std::cin >> bitis;

    // Belirtilen aralıktaki pozitif çift sayıları ekrana yazdır
    for (int i = baslangic; i <= bitis; i++) {
        if (i % 2 == 0 && i > 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}


// Example Week 5.3

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Rastgele sayı üretimi için zamanın başlangıcını ayarla
    srand(static_cast<unsigned>(time(0)));

    int rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasında rastgele bir sayı üret

    for (int deneme = 1; deneme <= 5; deneme++) {
        int tahmin;
        std::cout << "Tahmininizi girin (1 ile 100 arasında): ";
        std::cin >> tahmin;

        if (tahmin < rastgeleSayi) {
            std::cout << "Daha büyük bir sayı girin." << std::endl;
        } else if (tahmin > rastgeleSayi) {
            std::cout << "Daha küçük bir sayı girin." << std::endl;
        } else {
            std::cout << "Tebrikler! Doğru tahmin ettiniz." << std::endl;
            return 0; // Oyunu bitir
        }
    }

    std::cout << "Üzgünüm, deneme hakkınız bitti. Doğru cevap " << rastgeleSayi << " idi." << std::endl;
    return 0;
}



// Example 5.4 
#include <iostream>

int main() {
    int sayac = 0;

    do {
        std::cout << "do-while döngüsü - Sayac: " << sayac << std::endl;
        sayac++;
    } while (sayac > 0 && sayac < 100);

    std::cout << "do-while döngüsü bitti." << std::endl;

    return 0;
}


// Example 5.5

#include <iostream>

int main() {
    int sayac = 0;

    while (sayac < 5) {
        std::cout << "while döngüsü - Sayac: " << sayac << std::endl;
        sayac++;
    }

    std::cout << "while döngüsü bitti." << std::endl;

    return 0;
}


// Example 5.6 
#include <iostream>

int main() {
    int sayi;

    do {
        std::cout << "Pozitif bir tamsayi girin: ";
        std::cin >> sayi;

        if (sayi <= 0) {
            std::cout << "Geçersiz giriş. Pozitif bir tamsayi girin." << std::endl;
        }
    } while (sayi <= 0);

    std::cout << sayi << " adet pozitif tamsayi sırasıyla ekrana yazdırılıyor:" << std::endl;

    for (int i = 1; i <= sayi; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
