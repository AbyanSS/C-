#include<iostream>
// #include <string>
using namespace std;

int main(){
    string nm_item = "";
    float stat_item = 0;
    char lanjut = 'y';
    string item_prev = "";
    float stat_prev = 0;
    bool item_pertama = true;
    string item_terhebat;
    string item_terendah;
    float stat_terhebat;
    float stat_terendah;

    while (lanjut == 'y'){
        cout << "Masukkan Item : ";
        // cin >> nm_item;
        getline(cin, nm_item);
        cout << "Masukkan Stat : ";
        cin >> stat_item;
        cout << "Item yg dimasukkan adalah " << nm_item << ", dengan stat item "<< stat_item << endl;
        // cout << "Stat Item : " << stat_item << end;

        if(item_pertama == true){
            item_prev = "Nothing";
            stat_prev = 0;
            stat_terhebat = stat_item;
            item_terhebat = nm_item;
            stat_terendah = stat_item;
            item_terendah = nm_item;
        } else {
            if(stat_item >= stat_terhebat){
                stat_terhebat = stat_item;
                item_terhebat = nm_item;
            } else {
                if(stat_item <= stat_terendah){
                    stat_terendah = stat_item;
                    item_terendah = nm_item;
                }
            }
        }

        cout << "Item sebelumnya adalah " << item_prev << ", dengan stat item " << stat_prev << endl;
        item_prev = nm_item;
        stat_prev = stat_item;
        cout << "Item terhebat adalah " << item_terhebat << ", dengan stat item " << stat_terhebat << endl;
        cout << "Item terlemah adalah " << item_terendah << ", dengan stat item " << stat_terendah << endl;
        item_pertama = false;

        cout << "Lanjutkan? (y/n)" << endl;
        cin >> lanjut;
        cin.ignore();
    }
    cout << "Selesai!";
    return 0;
}