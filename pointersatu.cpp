#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
    cout<<"No Induk = "<<nim<<endl;
    }
};

int main()

mahasiswa mhs; //Object mhs
mhs.nim = 5;
mhs.showNim(); //Member Access Operator

mahasiswa &refMhs = mhs; //Pointer Reference refMhs
mhs.nim = 2; //Member Access Operator

