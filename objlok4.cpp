#include <string.h>
#include "majalah.h"
#include <iostream>
using namespace std;

majalah::majalah(char *namaMajalah, char *penerbit, int jumlah) {
    strcpy(majalah::namaMajalah, namaMajalah);
    strcpy(majalah::penerbit, penerbit);
    majalah::jumlah = jumlah;
}

void majalah::info() {
    cout << "Nama Majalah  : " << namaMajalah << endl;
    cout << "Penerbit      : " << penerbit << endl;
    cout << "Jumlah Majalah: " << jumlah << endl;
    cout << endl;
}