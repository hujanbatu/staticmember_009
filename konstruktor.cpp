#include <iostream>
#include <iostream>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa :: mahasiswa(int iNim){
    nim= 0;
    nama ="";
}

mahasiswa :: mahasiswa(int iNim){
    nim=iNim;
}

mahasiswa :: mahasiswa(string iNama){
    nama=iNama;
}
mahasiswa :: mahasiswa(int iNim, string iNama){
    nim=iNim;
    nama=iNim;
}
void mahasiswa::cetak(){
    cout<<endl<< "Nim = " <<nim<<endl;
    cout<< "Nama = " <<nama<<endl;
}

int main(){
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Insra");
    mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}