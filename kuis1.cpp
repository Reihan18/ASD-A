#include <iostream>
#include <string.h>

using namespace std;

#define MAX 100
#define true 1
#define false 0

struct biodata {
    char nama[30];
    char nim[15];
    float nilai;
};

struct biodata mhs;
struct biodata queue[MAX];

void init(void);
int full(void);
int empty(void);
struct biodata entridata(void);
void enqueue(struct biodata mhs);
struct biodata dequeue(void);
void display(struct biodata mhs);
void baca(void);

int awal, akhir;

int main() {
    char pilih;
    cout << "== Program Entri Data Mahasiswa ==\n";
    init();

    do {
        cout << "MENU PILIHAN :\n";
        cout << "1. Input Data\n";
        cout << "2. Hapus Data (Queue)\n";
        cout << "3. Lihat Daftar Mahasiswa\n";
        cout << "4. Hapus Semua Data\n";
        cout << "5. Selesai.\n";
        cout << "Pilih 1 sd 5 : ";
        cin >> pilih;

        switch(pilih) {
            case '1' : 
                mhs = entridata(); 
                enqueue(mhs); 
                break;
            case '2' : 
                if (empty() != true) {
                    cout << "\nData yang dihapus : \n";
                    mhs = dequeue(); 
                    display(mhs); 
                } else {
                    cout << "Queue kosong...\n";
                }
                break;
            case '3' : 
                baca(); 
                break;
            case '4' : 
                init(); 
                cout << "\nData telah dikosongkan\n";
                break;
            case '5' : 
                break;
            default : 
                cout << "Pilih 1 sd 5!";
                break;
        }
        cout << "\n";
    } while(pilih != '5');

    return 0;
}

void init(void) {
    awal = -1;
    akhir = -1;
}

void enqueue(struct biodata mhs) {
    if(empty() == true) {
        awal = 0;
        akhir = 0;
        queue[awal] = mhs;
    } else if(full() != true) {
        akhir++;
        queue[akhir] = mhs;
    } else {
        cout << "Queue sudah penuh... \n";
    }
}

struct biodata dequeue(void) {
    struct biodata temp = queue[awal];
    for(int i = awal; i < akhir; i++) {
        queue[i] = queue[i+1];
    }
    akhir--;
    return temp;
}

int full(void) {
    if(akhir == MAX - 1) return(true);
    else return(false);
}

int empty(void) {
    if(akhir == -1) return(true);
    else return(false);
}

void baca(void) {
    cout << "\nIsi Queue Mahasiswa : \n";
    if(empty() != true) {
        for(int i = awal; i <= akhir; i++) {
            display(queue[i]);
        }
    } else {
        cout << "Data kosong.";
    }
    cout << "\n";
}

struct biodata entridata(void) {
    struct biodata mhs;
    cout << "\n";
    cout << "Masukkan Nama  : "; cin >> mhs.nama;
    cout << "Masukkan NIM   : "; cin >> mhs.nim;
    cout << "Masukkan Nilai : "; cin >> mhs.nilai;
    return mhs;
}

void display(struct biodata mhs) {
    cout << "--------------------";
    cout << "\nNama  : " << mhs.nama;
    cout << "\nNIM   : " << mhs.nim;
    cout << "\nNilai : " << mhs.nilai << "\n";
}