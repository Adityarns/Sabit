#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string jenis;
        int waktuDetik;

        cout << "\n=== Sistem Parkir ===" << endl;
        cout << "Masukkan jenis kendaraan (motor/mobil atau ketik 'exit' untuk keluar): ";
        cin >> jenis;

        if (jenis == "exit") {
            cout << "Program berhenti.\n";
            break;
        }

        if (jenis != "motor" && jenis != "mobil") {
            cout << "Jenis kendaraan tidak valid. Silakan masukkan 'motor' atau 'mobil'.\n";
            continue;
        }

        cout << "Masukkan waktu parkir dalam detik: ";
        cin >> waktuDetik;

        int jam = waktuDetik / 3600;
        int sisaDetik = waktuDetik % 3600;
        int menit = sisaDetik / 60;
        int detik = sisaDetik % 60;

        int biaya = 1000; 
        int biayaTambahanPerJam = (jenis == "motor") ? 2000 : 3000;

        if (jam >= 1) {
            biaya += jam * biayaTambahanPerJam;
            if (menit > 0 || detik > 0) {
                biaya += biayaTambahanPerJam;
            }
        } else if (menit > 0 || detik > 0) {
            biaya = 1000; 
        }

        cout << "Jenis kendaraan : " << jenis << endl;
        cout << "Waktu parkir    : " << jam << " jam, " << menit << " menit, " << detik << " detik.\n";
        cout << "Total biaya parkir: Rp " << biaya << endl;
    }

    return 0;
}
