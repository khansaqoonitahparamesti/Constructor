#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
    mahasiswa ( int nim, string nama);

}; //constructor berparameter

// definisi constructor dengan parameter
mahasiswa :: mahasiswa (int nim , string nama){
    cout << "constructor dengan parameter terpanggil" << endl;
    cout << " NIM :" << nim << endl;
    cout << " Nama :"<< nama << endl;
};

int main (){
mahasiswa mhs (12345, "Psscal");
return 0;
};