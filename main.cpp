#include <iostream>
using namespace std;

int main(){
    int waktu, sisa, menit, jam, detik, harga;
    cout << "Masukkan waktu parkir dalam detik: ";
    cin >> waktu;
        jam = waktu / 3600;
        sisa = waktu % 3600;
        menit = sisa / 60;
        detik = sisa % 60;
        harga = 1000;
        cout << "Waktu parkir: " << jam << " jam " << menit << " Menit " << detik << " detik " << endl;
        if(waktu == 3600){
            harga = 1000;
            cout << "total biaya parkir: Rp."<< harga << endl; 
        }        
        else{
            harga = harga + (jam * 2000);
            cout << "total biaya parkir: Rp."<< harga << endl; 
        }
         
    
    return 0;
}