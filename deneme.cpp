#include <iostream>

    iostream is standart library header file that contains definitions
    of the standard input and output streams.

    iostream, standart giriþ ve çýkýþ akýþlarýnýn tanýmlarýný içeren
    standart kütüphane baþlýk dosyasýdýr


int main()
{
    int sayi;
    sayi = 5;

    //std::cout, iostream içinde tanýmlanan standart çýktý
    //akýþý nesnesidir.
    std::cout << "The current value is " << std::endl;
    std::cout << sayi;

    return 0;
    // return EXIT_SUCCESS;
}



#include <iostream>

using namespace std;

int main()
{
    const int birt_year = 2002;
    int height = 175, weight = 72;

    cout<< "Birt Year is : " << birt_year << endl;
    cout<< "My height is : " << height << endl;
    cout<< "My weight is : " << weight << endl;

    return 0;
}


#include <iostream>

using namespace std;
int main()
{
    bool true_value = true;
    bool false_value = false;

    cout<< "True value is : " << true_value << endl;
    cout<< "False value is: " << false_value << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    char harf = 'a';
    cout<< "a'nýn asci karþýlýðý: " << harf;
    return 0;

    char harf = 'a';
    int ascii_deger = static_cast<int>(harf);
    cout << "a'nýn ASCII karþýlýðý: " << ascii_deger;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int yas = 15;
    int kilo = 48;
    int boy = 176;
    cout<< "Benim yaþým: " << yas << endl;
    cout<< "Benim kilom: " << kilo << endl;
    cout<< "Benim boyum: " << boy << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    float number1 = 309.753;
    float number2 = -52.976;

    cout << "Sayi1: "<< number1 <<"\nSayi2: "<< number2;
    return 0;

}



#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    char b = 'A';

    a = a + b;
    float c = a + 3.0;

    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;

    double d = 3.4;
    double e = d + 2;

    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}


/*-- Week 4 --*/
#include <iostream>
using namespace std;
int main()
{
 char islem;
 cin >> islem;

 if(islem == '+')
 cout << "Toplama islemi";

 else if(islem == '-')
 cout << "Cikarma islemi";

 else if(islem == '*')
 cout << "Carpma islemi";

 else if(islem == '/')
 cout << "Bolme islemi";

 else
 cout << "Hatali giris.";
}


#include <iostream>
using namespace std;
int main()
{
 char islem;
 cin >> islem;
 switch(islem)
 {
 case '+':
 cout << "Toplama islemi";
 break;
 case '-':
 cout << "Cikarma islemi";
 break;
 case '*':
 cout << "Carpma islemi";
 break;
 case '/':
 cout << "Bolme islemi";
 break;
 default:
 cout << "Hatali giris.";
 }
 return 0;
}


#include <iostream>
 using namespace std;

 int main()
 {
      int sayi;
      cin >> sayi;

      if(sayi >= 0)
      {
          if(sayi%3 == 0)
              cout << "Sayi 3 ile tam bolunur.";
          else
              cout << "Sayi 3 ile tam bolunemez.";
      }
      else
      {
          cout << "Negatif sayi girdiniz.";
      }
      return 0;
  }



#include <iostream>
 using namespace std;

 int main()
 {
      int sicaklik;
      cin >> sicaklik;

      if(sicaklik < 0)
      {
         cout << "Kati";
      }
      else if (sicaklik > 0 && sicaklik <100)
      {
          cout << "sıvı";
      }
      else if (sicaklik > 100 && sicaklik <1000)
      {
          cout << "gaz";
      }
      else
      {
          cout << "plazma";
      }


      return 0;
  }

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















