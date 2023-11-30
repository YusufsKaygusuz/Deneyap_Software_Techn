// Create a Strong Password
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function Defining
// This function gets the parameter that is integer varible
string generatePassword(int length);
// This function doesn't varible
char getRandomChar();

int main() {
    // Seed setting for random number generation
    srand(time(0));

    // Determine password length
    int passwordLength;
    cout << "Şifre uzunluğunu belirleyin: ";
    // We get the password length from the user
    cin >> passwordLength;

    // Create the Strong Password
    string password = generatePassword(passwordLength);

    // Print the generated password on the screen
    cout << "Created Password: " << password << endl;

    return 0;
}

// The Function that Generates Strong Password 
string generatePassword(int length) {
    string strongPassword;

    for (int initial = 0; initial < length; ++initial) {
        strongPassword += getRandomChar();
    }
    
    return strongPassword;
}

// Rastgele karakter üreten fonksiyon
char getRandomChar() {
    const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.!@#$%^&*()_+";
    int randomCharacter = rand() % characters.length();
    
    return characters[randomCharacter];
}


// Class Example

#include <iostream>
#include <string>
using namespace std;

class Araba {
public:
    string marka;
    string model;
    float fiyat;
    int hiz;

    void hizlanma();
    void yavaslama();
    void bilgileriGoster();
};

void Araba::hizlanma() {
    hiz = hiz + 10;
    cout << "Araba hızlanıyor." << endl;
}

void Araba::yavaslama() {
    hiz = hiz - 10;
    cout << "Araba yavaşlıyor." << endl;
}

void Araba::bilgileriGoster() {
    cout << "Araba Bilgileri:" << endl;
    cout << "Marka: " << marka << endl;
    cout << "Model: " << model << endl;
    cout << "Fiyat: " << fiyat << " TL" << endl;
    cout << "Hız: " << hiz << " km/h" << endl;
}

int main() {
    Araba araba1;
    araba1.marka = "Audi";
    araba1.model = "Corolla";

    araba1.fiyat = 150000.0;
    araba1.hiz = 60;

    // Arabanın bilgilerini ekrana yazdır
    araba1.bilgileriGoster();
        
    cout <<"\n";
    // Hızlanma işlemi
    araba1.hizlanma();
    araba1.bilgileriGoster();
    cout <<"\n";

    // Yavaşlama işlemi
    araba1.yavaslama();
    araba1.bilgileriGoster();

    return 0;
}



