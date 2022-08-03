#include <iostream>

using namespace std;

int main()
{
    // IF
    int angka1 = 10;
    int angka2 = 5;
    if(angka1 > angka2){
        cout << angka1 << " Lebih besar dari " << angka2 << endl;
    }

    // IF - ELSE
    int suhu = 30;
    if(suhu > 21){
        cout << "Suhu hari ini Panas" << endl;
    }else{
        cout << "Suhu hari ini Dingin" << endl;
    }

    // NESTED IF
    int ranking = 1;
    int nilaiMatematika = 90;
    if(ranking == 1){
        if(nilaiMatematika >= 90){
            cout << "Kamu cerdas sekali" << endl;
        }else{
            cout << "Kamu pintar" << endl;
        }
    }else{
        cout << "Belajar lagi" << endl;
    }

    // IF Many Conditions
    if(ranking == 1 && nilaiMatematika >= 90){
        cout << "Kamu cerdas sekali" << endl;
    }else{
        cout << "Belajar lagi" << endl;
    }

    // SWITCH
    int pekan = 5;
    switch(pekan){
    case 1:
        cout << "Hari Senin" << endl;
        break;
    case 2:
        cout << "Hari Selasa" << endl;
        break;
    case 3:
        cout << "Hari Rabu" << endl;
        break;
    case 4:
        cout << "Hari Kamis" << endl;
        break;
    case 5:
        cout << "Hari Jumat" << endl;
        break;
    case 6:
        cout << "Hari Sabtu" << endl;
        break;
    case 7:
        cout << "Hari Ahad" << endl;
        break;
    default:
        cout << "Tidak diketahui" << endl;
        break;
    }

    // ZIPPED IF
    int nilaiUjian = 9;
    char nilaiAkhir;
    nilaiAkhir = nilaiUjian > 8 ? 'A' : 'C';
    cout << "Nilai: " << nilaiAkhir << endl;
    return 0;
}
