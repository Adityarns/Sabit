#include <iostream>
using namespace std;

void jumlahBilanganGenap(int n){
    int i = 1;
    int x = 0;
    int jumlah = 0;
    while(i < n){
        x += 2;
        jumlah += x;
        i++;
    }
    cout << "Jumlah " << n << " bilangan genap pertama adalah "<< jumlah << endl;
}


void hitungDurasi(int jam1, int menit1, int detik1, int jam2, int menit2, int detik2) {
    int total1 = jam1 * 3600 + menit1 * 60 + detik1;
    int total2 = jam2 * 3600 + menit2 * 60 + detik2;

    int durasi = abs(total2 - total1);  // durasi dalam detik

    int hh = durasi / 3600;
    int mm = (durasi % 3600) / 60;
    int ss = durasi % 60;

    cout << "Durasi: " << hh << ":" << mm << ":" << ss << endl;
}

int main(){
    int N;
    cout << "Masukkan jumlah N: ";
    cin >> N;
    jumlahBilanganGenap(N);
    
    // Soal 2
    int jam1, menit1, detik1;
    int jam2, menit2, detik2;

    cout << "\nMasukkan waktu pertama (hh mm ss): ";
    cin >> jam1 >> menit1 >> detik1;

    cout << "Masukkan waktu kedua (hh mm ss): ";
    cin >> jam2 >> menit2 >> detik2;

    hitungDurasi(jam1, menit1, detik1, jam2, menit2, detik2);

    return 0;
}