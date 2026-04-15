#include <iostream>
using namespace std;

typedef struct {
	string npm;
	string nama_mhs;
	double nilai;
}NilaiMK;

typedef struct elm *alamatelm;
typedef struct elm {
	NilaiMK Kontainer;
	alamatelm next;
}	elemen;

typedef struct {
	elemen* top;
} stack;
void buatSTkosong(stack *S) {
	(*S).top = NULL;
}

int isKosong(stack S) {
	bool hasil = false;
	
	if(S.top == NULL) {
		hasil = true;
	}
	return hasil;
}

int jmlElemen(stack S) {
	int hasil = 0;
	if(S.top != NULL) {
		elemen *bantu;
		bantu = S.top;
		
		while(bantu != NULL) {
			hasil = hasil + 1;
			bantu = bantu -> next;
		}
	}
	return hasil;
	
void push(string npm, string nama_mhs,double nilai,stack *S) {	
    elemen *info;
	info = new elemen;
	info -> Kontainer.npm = npm;
	info -> Kontainer.nama_mhs = nama_mhs;
	info -> Kontainer.nilai = nilai;
	
	if((*S) . top == NULL) {
		cout << "Stack penuh" << endl;
		info -> next = NULL;
	}
	else {
		info -> next = (*S).top;
	}
	(*S).top = info;
	info = NULL;
}

void Pop(stack *S) {
	if((*S). top != NULL) {
		elemen *hapus = (*S). top;
		if(jmlelemen(*S) == 1) {
			(*S).top = (*S).top -> next;
		}
		hapus -> = NULL;
		delete hapus;
	}
	else {
		cout << "STACK KOSONG" << endl;
	}
}

void CetakStack(stack S)
{
	if (S.top != NULL)
	{
	cout << " MENAMPILKAN STACK " << endl;
	elemen *bantu = S.top;
	int i = 1;
	while(bantu != NULL)
	{
		
        cout << "--------------------------------------------------------------" << endl;
		cout << "Elemen ke                              :  " << i << endl;
		cout << "Nomor Pokok Mahasiswa                  :  " << bantu -> Kontainer.npm <<endl;
		cout << "Nama Mahasiswa                         :  " << bantu -> Kontainer.nama_mhs<<endl;
		cout << "Nilai Mahasiswa                        :  " << bantu -> Kontainer.nilai<<endl;
		
	bantu = bantu -> next;
    i = i + 1;
	}	
	cout << " -----------------------------------------------------" << endl;
	}
	else 
	{
		cout << "Stack kosong " << endl;
	}
}

int main(){
	stack s;
	
	buatSTkosong (&S);
	CetakStack(S);
	cout << endl;
	cout << endl;
	cout << "---------------------------------------------------------" << endl;
	push("4525210065", "reihan", 88.75, &S);
	push("4525210066", "dzaki", 78.55, &S);
	push("4525210067", "farezka", 98.85, &S);
	push("4525210068", "rei", 38.65, &S);
	push("4525210069", "rezka", 88.78, &S);
	push("4525210070", "han", 69.43, &S);
	push("4525210071", "dza", 67.56, &S);
	CetakStack(S);
	cout << "===============================================" << endl;
	cout << endl;
	cout << endl;
	Pop(&S);
	CetakStack(S);
	cout << endl;
	cout << endl;
	Pop(&S);
	CetakStack(S);
	cout << "================================================" << endl;
	return 0;
}