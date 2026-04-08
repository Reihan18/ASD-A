#include <iostream>
using namespace std;

class Barang{
	public:
	char kodeBarang [ 10 ];
	char namaBarang [ 30 ];
	float harga;
};
int main() {
	Barang brg;
	cout << "Kode barang tersebut =  "; cin >>brg.kodeBarang;
	cout << "Nama barang tersebut =  "; cin >>brg.namaBarang;
	cout << "Harga barang tersebut =  "; cin >>brg.harga;
	cout << endl;
	cout << "----------------------------------------------"<<endl;
	cout << "                     DATA BARANG ANDA"<<endl;
	cout << "----------------------------------------------"<<endl;
	cout << "Kode barang tersebut          ="<< brg.kodeBarang<<endl;
	cout << "Nama barang tersebut          ="<< brg.namaBarang<<endl;
	cout << "Harga barang tersebut         ="<< brg.harga<<endl;
cin.get(); }