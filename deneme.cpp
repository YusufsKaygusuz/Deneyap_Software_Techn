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

