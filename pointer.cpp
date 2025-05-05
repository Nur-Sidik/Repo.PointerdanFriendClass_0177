#include <iostream>
using namespace std;

class Dosen 
{
    public:
    string nama;
    void TampilNama(){
        cout << "Namanya adalah = " << nama << endl;
    }
};

class staff
{
    public :
    int nidn;
};

int main(){
    Dosen ds;
    ds.nama = "Giga";
    ds.TampilNama();

    Dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamat Memori = " << &dsref << endl;
    dsref.TampilNama();

    Dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamat memori = " << pds << endl;
    pds->TampilNama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "alamat memori a = " << &a << endl;
    cout << "alamat memori a = " << c << endl;

}