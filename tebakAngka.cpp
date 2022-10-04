#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    //string kata;
    int angka;
    int hint;
    int tebakan;
    int life = 3;
    char mau = 'y';
    srand(static_cast<unsigned int>(time(0)));

    while(angka<=2 || angka>=15){
        cout << "Masukan angka (0-15) : ";
        cin >> angka;
        if(angka>15){
            cout << "Nominal terlalu besar!" << endl;
        }else if(angka<2){
            cout << "Nominal terlalu kecil!" << endl;
        }
        cout << "Tebak angka antara 0 sampai " << angka << endl;
        hint = rand() % angka;

        while(mau == 'y'){
            cout << "Butuh hint? (y/n)" ;
            cin >> mau;
            if(mau == 'y'){
              cout << "Hint, angkanya kurleb (PUBGM Party - solo): " << hint + 3 << endl;
            }else{
                break;
            }
            //cout << "Hint, angkanya kurleb (PUBGM Party - solo): " << hint + 3 << endl;
        }

        while(tebakan != hint){
            cout << "Masukan tebakan anda : " ;
            cin >> tebakan;

            if(tebakan == hint){
                cout << "Tebakan anda benar!" << endl;
            }else{
                cout << "Tebakan anda salah" << endl;
            }

            //if(tebakan != hint){
                //cout << "Nyawa sisa : " << life-1 << endl;
            //}else if(life == 0){
                //cout << "Game Over!";
            //}
        }


    }



    return 0;
}
