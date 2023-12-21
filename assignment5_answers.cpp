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
