#include <iostream>
using namespace std;

// Soal 1: Cek apakah semua elemen sama
bool semuaElemenSama(int A[], int N) {
    for (int i = 1; i < N; i++) {
        if (A[i] != A[0]) return false;
    }
    return true;
}

// Soal 2: Ubah array 1D menjadi matriks dan lakukan operasi
void prosesMatriks(int A[], int m, int n, int cari) {
    int matriks[100][100];

    // Ubah array A ke dalam bentuk matriks
    for (int i = 0; i < m * n; i++) {
        matriks[i / n][i % n] = A[i];
    }

    // Cari elemen maksimum dan minimum
    int maksimum = matriks[0][0];
    int minimum = matriks[0][0];
    bool ditemukan = false;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int nilai = matriks[i][j];
            if (nilai > maksimum) maksimum = nilai;
            if (nilai < minimum) minimum = nilai;
            if (nilai == cari) ditemukan = true;
        }
    }

    cout << "Elemen terbesar di dalam matriks: " << maksimum << endl;
    cout << "Elemen terkecil di dalam matriks: " << minimum << endl;
    if (ditemukan)
        cout << "Terdapat elemen bernilai " << cari << " di dalam matriks." << endl;
    else
        cout << "Tidak terdapat elemen bernilai " << cari << " di dalam matriks." << endl;
}

int main() {
    const int N = 6;
    int A[N] = {5, 5, 5, 5, 5, 5}; 
    int m = 2, n = 3;              
    int nilaiCari = 5;            

    // Soal 1
    if (semuaElemenSama(A, N)) {
        cout << "Semua elemen pada array A sama." << endl;
    } else {
        cout << "Tidak semua elemen pada array A sama." << endl;
    }

    // Soal 2
    prosesMatriks(A, m, n, nilaiCari);

    return 0;
}