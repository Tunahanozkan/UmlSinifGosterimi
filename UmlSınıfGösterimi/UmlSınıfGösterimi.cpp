// UmlSınıfGösterimi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
class KolaMakinası
{
    float fiyat;
    int sayi;
public:
    void İlkYukleme(float f = 2.5, int s = 120);
    void kolaVerme();
    void goster();
};
void KolaMakinası::İlkYukleme(float f, int s)
{
    fiyat = f;
    sayi = s;
}
void KolaMakinası::kolaVerme()
{
    float ode, fark;
    cout << "Kolanin fiyati:" << fiyat << "lira." << endl;
    cout << "Odemeniz:";
    cin >> ode;
    if ((ode >= fiyat) && (sayi > 0))
    {
        cout << "Kolaniz veriliyor." << endl;
        sayi--;
        fark = ode - fiyat;
        if (fark > 0)
        {
            cout << "Para ustunuz:" << endl;
            if (fark > 1.0)
            {
                cout << fark << "lira" << endl;

            }
            else
                cout << fark * 100 << "kurus" << endl;
        }    
    }
    else
        cout << "Kola verilemiyor." << endl;
}
void KolaMakinası::goster()
{
    cout << "Son Durum:" << endl;
    cout << "Kolanin Fiyati:"<<fiyat <<" lira"<< endl;
    cout << "Kalan Kola sayisi:" <<sayi<<" adet"<< endl;
}

int main()
{
    KolaMakinası univ;
    univ.İlkYukleme();
    univ.kolaVerme();
    univ.goster();
    return 0;
}
