#include <iostream>
using namespace std;

class Hewan 
{
    private:
    string jenisKelamin;
    public:
    string tipe;
    string umur;

    void inputData() {
    cout << "masukkan jenis kelamin = " << endl;
    cin >> jenisKelamin;
    cout << "masukkan tipe = " << endl;
    cin >> tipe;
    cout << "masukkan umur = " << endl;
    cin >> umur;
    }
    void tampilHewan(){
        cout << "jenis kelaminnya adalah " << jenisKelamin << endl;
    }
};   
int main() {
    Hewan kucing;
    kucing.inputData();
    cout << "umurnya adalah " << kucing.umur << endl;
    cout << "tipenya adalah " << kucing.tipe << endl;
    kucing.tampilHewan();
}