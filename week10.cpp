#include <iostream>
#include <string>

using namespace std;

class Araba {
    public:
    //Default Constructor (Paramatre Almayan Yapıcı Metod)
         Araba() {
            cout<< "Default Constructor cagrildi." << endl;
            marka = "Bilinmiyor";
            model = "Bilinmiyor";
            yil = 0;
        }
        // Parametre alan Constructor (Paramatre Almayan Yapıcı Metod)
        Araba(string markaAdi, string modelAdi, int uretimYili){
            cout << "Parametre alan constructor cagrildi." << endl;
            marka = markaAdi;
            model = modelAdi;
            yil = uretimYili;
        }
        
        // Bilgilerin görüntülenmesini sağplayan fonksiyon
        void BilgileriGoster () const {
            cout << "Marka: " << marka << ", Model: " << model << ", uretim yili: " << yil << endl;
        }
        
        // Bilgileri ayarlama-güncelleme fonksiyonu
        void BilgileriGuncelle(string yeniMarka, string yeniModel, int yeniYil){
            marka = yeniMarka;
            model = yeniModel;
            yil = yeniYil;
            cout << "Bilgileriniz Güncellendi." << endl; 
        }
        
        // Üretim yili guncelle fonksiyon
        void UretimYiliGuncelle(int yeniYil){
            yil = yeniYil;
            cout << "Uretim yili guncellendi\n"; 
        }
    
    private:
        string marka;
        string model;
        int yil;
};

int main(){
    /*
---------------------------
  | 5    |...  |.    |12
---------------------------
    */
    // Diziler Tekrarı
    int sayilar[4] = {5,6,7,8,9,10,11,12};
    cout << sayilar[-1] << endl;
    cout << sayilar[-2] << endl;
    
    Araba car2("Toyota", "Corolla", 2020);
    car2.BilgileriGoster();
    
    car2.BilgileriGuncelle("Audi", "A5", 2022);
    car2.BilgileriGoster();
    
    car2.UretimYiliGuncelle(2009);
    car2.BilgileriGoster();
    
    return 0;
}
