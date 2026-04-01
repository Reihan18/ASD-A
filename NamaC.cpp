#include <iostream>
#include <ctype.h>
using namespace std;

int main() 
{
	int i;
	char *namaKu, NM[6]= { 'R','E','I','H','A','N' };
	cout << " Nama Ku " << endl;
	cout << " ------------- " << endl;
	for(i=0; i<6; i++)
	{
		namaKu = &NM [i];
		cout << "    " << *namaKu ;
	}
	cin.get();
}
	