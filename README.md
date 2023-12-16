# 🚀 C++ Programlama Dili Dersi 🚀

<p align="center">
<img src="https://github.com/YusufsKaygusuz/Deneyap_Software_Techn/assets/86704802/cd98b111-b66c-4ddb-b0c4-f62ce0ab8b46" alt="ReLU" width="150"/>
<img src="https://github.com/YusufsKaygusuz/Deneyap_Software_Techn/assets/86704802/7bfa61ee-d340-41b9-8855-dec4c561744f" alt="ReLU" width="200"/> 
<img src="https://github.com/YusufsKaygusuz/Deneyap_Software_Techn/assets/86704802/a4e54abd-9ff4-4d8f-b784-bd0653e9b8f3" alt="ReLU" width="150"/>
<img src="https://github.com/YusufsKaygusuz/Deneyap_Software_Techn/assets/86704802/a90a23b8-0c21-40ee-9617-b17d2858b100" alt="ReLU" width="150"/>

</p>


## 📚 İçindekiler
| Hafta | Haftalık İçerik                             |
|-------|--------------------------------------------|
| 📆 Week 3 | [**Değişken ve Veri Tiplerini Tanıyalım**](#week-3-değişken-ve-veri-tiplerini-tanıyalım) |
| 📆 Week 4 | [**Karar Verme Yapılarına Giriş If-Else if-else**](#week-4-karar-verme-yapılarına-giriş-if-else-if-else) |
| 📆 Week 5 | [**Döngülere Giriş For Döngüsü & Switch-case**](#week-5-döngülere-giriş-for-döngüsü--switch-case) |
| 📆 Week 6 | [**Diziler Konusuyla İlgili Örnek Kodlar**](#week-6-diziler-konusuna-ait-örnek-kodlar)         |
| 📆 Week 7 | [**Fonksiyonlara Giriş ve Örnekler**](#week-7-fonksiyonlara-giriş-ve-örnekler) |
| 📆 Week 8 | [**Fonksiyon Pratiği ve Sınıflara (Class) Giriş**](#week-8-fonksiyon-pratiği-ve-sınıflara-class-giriş) |
| 📆 Week 9 | [**Sınıflarda (Class) Yapıcı ve Yıkıcı Metodlar**](#week-9-sınıflarda-class-yapıcı-ve-yıkıcı-metodlar) |

## Week 3: Değişken ve Veri Tiplerini Tanıyalım

Bu hafta, C++ programlama dilindeki temel yapı taşlarından olan değişkenleri ve veri tiplerini tanıyacağız. Değişkenler, program içinde bilgi saklama ve işleme yeteneği kazandırır. Ayrıca, temel veri tipleri (int, float, char, vs.) üzerinde çalışarak programlama temellerini oluşturacağız.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // int: Tam sayı
    int tamSayi = 42;

    // float: Ondalıklı sayı (tek hassasiyet)
    float ondalikliSayi = 3.14f;

    // double: Ondalıklı sayı (çift hassasiyet)
    double ciftHassasiyetliSayi = 2.71828;

    // string: Metin dizisi
    string metin = "Merhaba, dünya!";

    // bool: Mantıksal değer (true/false)
    bool dogruMu = true;

    // char: Tek karakter
    char karakter = 'A';

    // Değişken değerlerini ekrana yazdırma
    cout << "Tam Sayı: " << tamSayi << endl;
    cout << "Ondalıklı Sayı: " << ondalikliSayi << endl;
    cout << "Çift Hassasiyetli Sayı: " << ciftHassasiyetliSayi << endl;
    cout << "Metin: " << metin << endl;
    cout << "Mantıksal Değer: " << (dogruMu ? "true" : "false") << endl;
    cout << "Karakter: " << karakter << endl;

    return 0;
}
```

## Week 4: Karar Verme Yapılarına Giriş If-Else if-else

Koşullu ifadelerle çalışmaya başlayacağımız bu hafta, if-else if-else gibi yapıları kullanarak programlara karar verme yeteneği kazandıracağız. Bu yapılar, programlarımızı çeşitli durumlara göre yönlendirmemizi sağlar.

```cpp
#include <iostream>
using namespace std;

int main() {
    // Kullanıcıdan bir sayı girişi istenir
    cout << "Bir sayı giriniz: ";
    int sayi;
    cin >> sayi;

    // if-else if-else yapısı kullanılarak karar verme
    if (sayi > 0) {
        cout << "Girilen sayı pozitif." << endl;
    } else if (sayi < 0) {
        cout << "Girilen sayı negatif." << endl;
    } else {
        cout << "Girilen sayı sıfır." << endl;
    }

    return 0;
}
```

## Week 5: Döngülere Giriş For Döngüsü & Switch-case

Bu hafta, döngülerin temelini oluşturan for döngüsü ile programlarımızı tekrarlı işlemlere yönlendirmeyi öğreneceğiz. Ayrıca, switch-case yapısı ile farklı durumları ele alarak programlarımızı daha esnek hale getireceğiz.

```cpp
#include <iostream>

using namespace std; // std isim alanını kullan

int main() {
    // for döngüsü ile sayıları ekrana yazdırma
    cout << "For Döngüsü İle Sayıları Yazdırma:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Kullanıcının seçtiği sayıya göre switch-case yapısı
    cout << "Bir sayı giriniz (1-3 arasında): ";
    int kullaniciSecimi;
    cin >> kullaniciSecimi;

    switch (kullaniciSecimi) {
        case 1:
            cout << "Birinci durum seçildi." << endl;
            break;
        case 2:
            cout << "İkinci durum seçildi." << endl;
            break;
        case 3:
            cout << "Üçüncü durum seçildi." << endl;
            break;
        default:
            cout << "Geçersiz giriş. 1-3 arasında bir sayı giriniz." << endl;
    }

    return 0;
}

```

## Week 6: Diziler Konusuna Ait Örnek Kodlar

Diziler, benzer tipteki verileri tek bir değişken altında saklamamıza olanak tanıyan önemli bir konsepttir. Bu hafta, dizilerin tanımlanması, elemanlara erişim ve dizilerle ilgili temel işlemleri içeren örnek kodlarla pratik yapacağız.

<h3>Dizi Tanımlama ve Elemanlara Erişim</h3>

```cpp
#include <iostream>
using namespace std;

int main() {
    // Dizi tanımlama
    int sayilar[5] = {1, 2, 3, 4, 5};

    // Dizi elemanlarına erişim
    for (int i = 0; i < 5; ++i) {
        cout << "sayilar[" << i << "] = " << sayilar[i] << endl;
    }

    return 0;
}
```
<h3>Dizi Boyutu ve Ortalama Hesaplama</h3>

```cpp
#include <iostream>
using namespace std;

int main() {
    // Dizi tanımlama
    double notlar[] = {75.5, 80.0, 90.5, 85.0, 88.5};

    // Dizi boyutunu ogrenme
    int dizininBoyutu = sizeof(notlar) / sizeof(notlar[0]);

    // Dizi elemanlarına erişim ve toplam hesaplama
    double toplam = 0.0;
    for (int i = 0; i < dizininBoyutu; ++i) {
        cout << "notlar[" << i << "] = " << notlar[i] << endl;
        toplam += notlar[i];
    }

    // Ortalama hesaplama ve ekrana yazdırma
    double ortalama = toplam / dizininBoyutu;
    cout << "Not Ortalaması: " << ortalama << endl;

    return 0;
}

```

## Week 7: Fonksiyonlara Giriş ve Örnekler

Fonksiyonlar, kodunuzu modüler hale getirmenizi sağlayan ve belirli görevleri yerine getiren bloklardır. Bu hafta, fonksiyonların tanımlanması, çağrılması ve örneklerle pratiği üzerinde duracağız. Fonksiyonlar, kodun okunabilirliğini artırır ve tekrar kullanılabilirlik sağlar.

<h3>Temel Fonksiyon Tanımlama ve Çağrılma</h3>

```cpp
#include <iostream>
using namespace std;

// Fonksiyon tanımı
void selamla() {
    cout << "Merhaba! Bu bir fonksiyon." << endl;
}

int main() {
    // Fonksiyon çağrısı
    selamla();

    return 0;
}
```

<h3>Parametreli Fonksiyon ve Çağrılma</h3>

```cpp
#include <iostream>
using namespace std;

// Parametreli fonksiyon tanımı
void kareAlVeYazdir(int sayi) {
    int kare = sayi * sayi;
    cout << sayi << " sayısının karesi: " << kare << endl;
}

int main() {
    // Parametreli fonksiyon çağrısı
    kareAlVeYazdir(5);
    kareAlVeYazdir(8);

    return 0;
}
```
<h3>Fonksiyonlardan Değer Döndürme</h3>

```cpp
#include <iostream>
using namespace std;

// Fonksiyon tanımı
int topla(int x, int y) {
    return x + y;
}

int main() {
    // Fonksiyon çağrısı ve değeri kullanma
    int sonuc = topla(3, 4);
    cout << "Toplam: " << sonuc << endl;

    return 0;
}

```

## Week 8: Fonksiyon Pratiği ve Sınıflara (Class) Giriş

Bu hafta, fonksiyonları daha derinlemesine anlamlandırarak pratiğini yapacak ve C++ dilindeki sınıflara (class) giriş yapacağız. Sınıflar, nesne yönelimli programlamanın temelini oluşturur ve veri yapısını daha organize bir şekilde yönetmemizi sağlar.

<h3></h3>

```cpp
#include <iostream>
using namespace std;

// MatematikIslemleri adlı sınıfın tanımlanması
class MatematikIslemleri {
public:
    // Sınıf içindeki fonksiyonlar (üye fonksiyonlar)
    int topla(int x, int y) {
        return x + y;
    }

    int carp(int x, int y) {
        return x * y;
    }

    double bol(double x, double y) {
        // y değeri 0'dan farklı mı kontrolü. Eğer sıfır değilse bölme işlemi gerçekleşmeli.
        if (y != 0.0) {
            return x / y;
        }
        // y değeri 0'a eşitse (Bir sayının sıfıra bölünmesi sonucunda) tanımsızlık ortaya çıkar ve hata oluşur.
        else {
            cerr << "Hata: Sıfıra bölme!" << endl;
            return 0.0;
        }
    }
};

int main() {
    // MatematikIslemleri sınıfından bir nesne oluşturulması
    MatematikIslemleri hesapMakinesi;

    // Sınıfın fonksiyonlarını kullanma
    int toplamSonucu = hesapMakinesi.topla(5, 3);
    cout << "Toplam: " << toplamSonucu << endl;

    int carpimSonucu = hesapMakinesi.carp(4, 6);
    cout << "Çarpım: " << carpimSonucu << endl;

    double bolumSonucu = hesapMakinesi.bol(9.0, 3.0);
    std::cout << "Bölüm: " << bolumSonucu << endl;

    return 0;
}

```


## Week 9: Sınıflarda (Class) Yapıcı ve Yıkıcı Metodlar

C++ dilinde constructor (kurucu fonksiyon) bir nesnenin oluşturulduğu anı temsil eden özel bir fonksiyondur. Bir sınıf tanımlandığında, bu sınıfa ait bir constructor tanımlanabilir ve bir nesne oluşturulduğunda otomatik olarak çağrılır. Constructor, sınıfın üye değişkenlerini başlatmak ve diğer başlangıç işlemlerini gerçekleştirmek için kullanılır.

Deconstructor (yıkıcı fonksiyon) ise bir nesne yok edildiğinde çağrılan bir özel fonksiyondur. Sınıfın ömrü sona erdiğinde, deconstructor bellek yönetimi ve diğer temizlik işlemlerini gerçekleştirmek için kullanılır. Deconstructor, sınıfın bellek ve kaynak yönetimini düzgün bir şekilde tamamlamasına yardımcı olur.
Örnek kullanım:
```cpp
#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor çağrıldı!" << std::endl;
    }

    // Deconstructor
    ~MyClass() {
        std::cout << "Deconstructor çağrıldı!" << std::endl;
    }
};

int main() {
    // Nesne oluşturulduğunda constructor çağrılır
    MyClass myObject;

    // Program sona erdiğinde deconstructor çağrılır
    return 0;
}
```

