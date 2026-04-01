#include <iostream>
#include <string>
using namespace std;

int main() {
struct MATAKULIAH {
	string nama;
	int sks;
	char nHuruf;
    float nAngka; } ;
	
MATAKULIAH DATA_MK;
DATA_MK.nama = " Algoritma dan Pemrograman 2 ";
DATA_MK.sks = 3;
DATA_MK.nHuruf = 'A' ;
DATA_MK.nAngka = 4.00;
cout<<endl;
cout<<endl;
cout<< " Mata kuliah  = " << DATA_MK.nama << endl;
cout<< " Jumlah SKS   = " << DATA_MK.sks << endl;
cout<< " Nilai        = " << DATA_MK.nHuruf << endl;
cout<< " indeks       = " << DATA_MK.nAngka << endl;
cin.get() ; }