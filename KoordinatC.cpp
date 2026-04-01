#include <iostream>
#include <string>
using namespace std;

struct Koordinat { 
int X;
int Y; };
void Tampil_posisi(Koordinat Posisi);

int main() {
Koordinat posisi;
posisi.X = 56;
posisi.Y = 53;
cout<<endl;
Tampil_posisi(posisi);
cin.get(); }

void Tampil_posisi (Koordinat posisi) {
cout << " Posisi Kordinat X adalah " << posisi.X << endl;
cout << " Posisi Kordinat Y adalah " << posisi.Y << endl; }