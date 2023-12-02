//Week 6 
//Example 6.1 (Diziler)
#include <iostream>
using namespace std;

int main()
{
    // {1, 2, 3, 4, 5};
    //  0. 1. 2. 3. 4.
    int tamSayilar[5] = {1, 2, 3, 4, 5};

    cout << tamSayilar[0] << endl; // 1
    cout << tamSayilar[2] << endl; //3
    cout << tamSayilar[4]

    return 0;
}


// Example 6.2
#include <iostream>
using namespace std;

int main()
{
    int dizi[3];

    //Kullanicidan diziye doldurmasini isteyelim
    for(int initial=0; initial<3; initial++)
    {
        cout << "Dizinin " << initial+1 << ".nci " << "elemanini giriniz: ";
        cin >> dizi[initial];
    }

    // Dizi elemanlarını ekrana yazdırma
    for(int initial=0; initial<3; initial++){
        cout << "dizi[" << initial << "] = " << dizi[initial] << endl;
      }

    return 0;
}


// Example 6.3
#include <iostream>
using namespace std;

int main()
{
    int notlar[4][2] = {
    {75, 55},
    {96, 45},
    {57, 59},
    {85, 65},
    };

    // Dizi elemanlarına erişim ve yazdırma
    for (int satir = 0; satir < 4; satir++){
        for (int sutun = 0; sutun < 2; sutun++) {
            cout << "notlar[" << satir +1 << "][" << sutun+1 << "] = " << notlar[satir][sutun] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Example 6.4
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string notlar[4][2] = {
    {"Matematik", "95"},
    {"Fizik", "70"},
    {"Kimya", "86"},
    {"Biyoloji", "70"},
    };

     // Dizi elemanlarına erişim ve yazdırma
     for(int satir = 0; satir < 4; satir++)
     {
         cout << "Ders: " << notlar[satir][0] << ", Not: " << static_cast<int>(stoi(notlar[satir][1])) << std::endl;
     }

    return 0;
}
