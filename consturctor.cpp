#include <iostream>
using namespace std;

class mahasiswa { //tanpa parameter
    public:
    mahasiswa();
}; // constructor mahasiswa

// constructor untuk menginisiasi
// contructor itu ada dua bisa langsung di tulis bisa juga harus mengambil nama kelas terlebih dahulu
// 

mahasiswa :: mahasiswa (){
    cout << "Constructor terpanggil " << endl;

}; // definisi condtructor mahasiswa

int main (){
    mahasiswa mhs;
    return 0;
}; //pembuatan objek
