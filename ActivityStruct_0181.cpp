#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
}; 

int main()
{
    mahasiswa mhs;
    cout << "Nomor Mahasiswa: "; 
    cin >> mhs.nim;
    cout << "Nama Mahasiswa: "; 
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa: "; 
    cin >> mhs.alamat;
    cout <<"Umur Mahasiswa: ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nim: " << mhs.nim;
    cout << "\n Nama: " << mhs.nim;
    cout << "\n Alamat: " << mhs.nim;
    cout << "\n Umur: " << mhs.nim;
}


