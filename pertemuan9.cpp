#include <iostream>
using namespace std;

class myClass {
    public:
    int num;
    string myString;
};

int main (){
    myClass class1;
    cout << "Masukkan nomor: "; cin >> class1.num;
    cout << "Masukkan nama: "; cin >> class1.myString;
    cout <<class1.num << endl;
    cout <<class1.myString << endl;
    return 0;
}
