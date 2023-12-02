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
