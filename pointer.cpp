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
    ds.nama "Giga";
    ds.TampilNama();

    Dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamat Memori = " << &dsref << endl;
}