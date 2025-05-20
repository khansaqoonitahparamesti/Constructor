#include <iostream>
#include <string>
using namespace std;
class Barang {
    public:
    Barang (int kode, string nama );
};

Barang :: Barang (int kode , string nama){
    cout << "kode Barang : "<< kode<<endl;
    cout << "Nama Barang :" << nama << endl;
   ;
};

int main (){
    Barang b1 (1, "mie instam" );
    Barang b2 (2, "telor");
    return 0 ;
}