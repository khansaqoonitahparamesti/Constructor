#include <iostream>
using namespace std;
class BangunDatar ;
class PersegiPanjang {
    public:
        void InputData(BangunDatar &Bd);
        void Output(BangunDatar &Bd);

};


class BangunDatar {
    private:
        float panjang;
        float lebar;
        float Hitungluas( ){
            return panjang * lebar;
        };

        float Hitungkeliling (){
            return 2 * (panjang + lebar);
    
        };

    public : 
        
        friend void PersegiPanjang ::InputData(BangunDatar &Bd);
        

        friend void PersegiPanjang ::Output (BangunDatar &Bd);
        
        
};

void PersegiPanjang ::InputData(BangunDatar &Bd){

    cout << "Masukkan Panjang Persegi Panjang :" ;
    cin >> Bd.panjang ;
    cout << "Masukkan lebar persegi panjang :";
    cin >> Bd.lebar;
};

void PersegiPanjang ::Output (BangunDatar &Bd){
    cout << "luas :" << Bd.Hitungluas()<<endl;
    cout << "Kelliling : "<< Bd.Hitungkeliling() << endl;

};




int main (){
    PersegiPanjang pP;
    BangunDatar Bd;
    pP.InputData(Bd);
    pP.Output (Bd);

};