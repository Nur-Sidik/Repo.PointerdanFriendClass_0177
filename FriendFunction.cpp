#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    void showNilaiPelajar(pelajar &x);
};

class pelajar{
private:
    int nilai;
public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &x);
};
void manusia::showNilaiPelajar(pelajar &x){
    std::cout << x.nilai;
}
 int main(){
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
 }