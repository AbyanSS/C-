#include<iostream>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

void jeda(int a){
    int add;
    int time;
    int i;

    time = a*100000000;

    for(i=0; i<time; i++){
        add*=i;
        add++;
        add++;
    }
}
void selesai(){
    cout << "\nSELAMAT KAMU BERHASIL KELUAR DARI BACKROOM!!";
    jeda(2);
    cout << "\nDITUNGGU KEDATANGAN YANG SELANJUTNYA";
    jeda(2);
    cout << "\n HA";
    jeda(3);
    cout << "\n HA";
    jeda(3);
    cout << "\n HA";
    jeda(3);
    cout << "SAMPAI JUMPA!!";
}

void game_rp(){ //Game teka teki
    vector<string> pil_jawab1{"a. 1,340", "b. 1,321", "c. 1,154"};
    string pilihan = "";
    string jawab_benar = "a";

    cout << "\n Selamat anda telah berhasil sampai ke level terakhir ini\n";
    cout << "\n Jika anda gagal di stage terakhir ini";
    cout << "\n Anda akan SELAMANYA terjebak di dalam Backroom ini..";
    cout << "\n HA";
    jeda(3);
    cout << "\n HA";
    jeda(3);
    cout << "\n HA";
    jeda(3);
    cout << "\nOke langsung saja";
    jeda(3);
    cout << "\nGame ini adalah game teka teki yang akan mengasah pengetahuan umum kalian tentang Indonesia";
    jeda(3);
    cout << "\nOke sudah siap? mari kita mulai!";
    jeda(3);
    cout << "\nTeka teki pertama, menurut data sensus BPS tahun 2010 berapakah jumlah SUKU yang ada di bangsa Indonesia ini?";
    jeda(2);
    cout << "Pilih salah satu :\n" << endl;
    for(int i = 0; i < pil_jawab1.size(); ++i){
        cout << pil_jawab1[i] << endl;
    }

    while(pilihan != jawab_benar){
        // cout << "\na. 1.340 \nb. 1.321 \nc. 1.154";
        cout << "\nJawaban anda adalah : ";
        cin >> pilihan;

        if(pilihan == jawab_benar){
            cout << "\nJAWABAN ANDA BENAR!";
            jeda(3);
            cout << "\nJawabanmu adalah a. 1.340";
            cout << "\nLoading........";
            jeda(4);
            selesai();
        }else{
            cout << "\nJAWABAN ANDA SALAH!";
            cout << "\nCoba lagi";
        }
    }
    


}

void game_perhitungan(){ //game perhitungan
    float jawaban_betul1 = 190.000;
    float jawaban_user1 = 0;
    // float jawaban_betul2 = 0; //ini diisi nanti
    // float jawaban_user2 = 0; //diisi nanti juga

    cout << "\n #Selamat! Kamu berhasil melewati tes pertama.# \n";
    cout << "\nTes selanjutnya adalah perhitungan jawab dengan benar 2 pertanyaan dibawah!";
    jeda(4);
    cout << "\nPertanyaan pertama. Andi diperintahkan ibunya untuk membeli beberapa buah.";
    jeda(4);
    cout << "\nDengan rincian 5 Apel, 4 Peer, dan 1 Ikat Anggur.";
    jeda(4);
    cout << "\nJika harga Apel adalah RP. 4000/buah, Peer = Rp. 5000/buah, dan Anggur Rp20.000/ikat.";
    jeda(4);
    cout << "\nBerapa uang yang Andi bayarkan jika Andi kembalian uang adalah Rp. 130.000";
    jeda(4);

    while (jawaban_user1 != jawaban_betul1){

        cout << "\nMasukkan jawaban anda : Rp ";
        cin >> jawaban_user1;
        jeda(1);

        //while(jawaban_user1 != jawaban_betul1){
            //cout << "Masukkan jawaban anda : ";
            //cin >> jawaban_user1;

            if(jawaban_user1 == jawaban_betul1){
                cout << "\n -=SELAMAT JAWABAN ANDA BENAR=-";
                cout << "\n --=== Memuat permainan selanjutnya ===--";
                jeda(8);
                game_rp();
            }else{
                cout << "\n -=JAWABAN ANDA SALAH! COBA LAGI=-";
                //cout << "\nMasukkan jawaban anda : ";
                //cin >> jawaban_user1;
                //break;
            }
        //}

    }


}

void tebakan(){ // Game tebak angka
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
              cout << "Hint, angkanya kurleb (PUBGM Party - solo): " << hint + 3 << endl; //hint = angka keluar - 3
            }else{
                break;
            }
            //cout << "Hint, angkanya kurleb (PUBGM Party - solo): " << hint + 3 << endl;
        }

        while(tebakan != hint){
            cout << "Masukan tebakan anda : " ;
            cin >> tebakan;

            if(tebakan == hint){
                cout << "\n -=SELAMAT JAWABAN ANDA BENAR=-" << endl;
                cout << "\n --=== Memuat permainan selanjutnya ===--";
                jeda(8);
                game_perhitungan();
            }else{
                cout << "\n -=JAWABAN ANDA SALAH! COBA LAGI=-" << endl;
            }

            // if(tebakan != hint){
            //     cout << "Nyawa sisa : " << life-1 << endl;
            // }else if(life == 0){
            //     cout << "Game Over!";
            // }
        }
    }
}

//BACKROOM

int main(){
    // string tes = "";
    // float benar1 = 0;
    // float tebakan = 0;
    // srand(static_cast<unsigned int>(time(0)));
    char mulai = 'm';
    cout << "Selamat datang di Backroom!" << endl;
    cout << "Selesaikan beberapa permainan untuk bisa keluar dari ruangan ini!" << endl;
    cout << "Berani memulai sekarang? [Tekan 'm' Untuk mulai] : ";
    cin >> mulai;
    cout << "\n --=== Tunggu sebentar sedang memuat permainan ===--\n";
    jeda(10);

    while(mulai == 'm'){
        cout << "\n Ruangan pertama kamu harus memecahkan pertanyaan ini." << endl;
        cout << "\nOke mari kita mulai saja untuk level pertama ini" << endl;
        tebakan();
        break;
        // while(benar1 != tebakan){

        // }
    }

    return 0;
}
