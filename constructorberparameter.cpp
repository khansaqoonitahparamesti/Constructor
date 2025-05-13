#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
    mahasiswa ( int nim, string nama);

}; //constructor berparameter

mahasiswa :: mahasiswa (int nim , string nama){
    cout << "constructor dengan parameter terpanggil" << endl;
    cout << " NIM :" << nim << endl;
    cout << " Nama :"<< nama << endl;
};

