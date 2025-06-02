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

int main(){
    int N;
    cout << "Masukkan jumlah N: ";
    cin >> N;
    jumlahBilanganGenap(N);
    
    return 0;
}