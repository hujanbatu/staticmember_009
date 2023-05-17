#include <iostream>
#include <iostream>
using namespace std;

class mahasiswa{
    public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();
    mahasiswa(string pnama) :nama(pnama){setID();}
};

int mahasiswa::nim = 0;

void mahasiswa::printAll(){
    id = ++nim;
}

void mahasiswa::printAll(){
    cout << "ID = " << id <<endl;
    cout << "nama = " << nama << endl;
    cout << endl;
}

int main(){
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");
    mhs2.nim = 20;
    mahasiswa mhs3("Andi Kurnia");
    mhs3.nim = 20;
    mahasiswa mhs4("Joko Purbohadi");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}