#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilNama(){
        cout << "Namanya adalah " << nama << endl;
    }
};
class Staff{
    public:
    int nidn;
};
int main (){
    Dosen ds;
    ds.nama = "Giga";
    ds.tampilNama();

    Dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamat memori = " << &dsref << endl;
    dsref.tampilNama();

    Dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamat memori = " << pds << endl;
    pds->tampilNama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "alamat memori a = " << &a << endl;
    cout << "alamat memori a = " << c << endl;
    cout << "cetak c = " << *c << endl;
    c = &b;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
}