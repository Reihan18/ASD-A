#include <iostream>
using namespace std;

int stack[5];
int top = -1;

int main(){
	
	top++;
	stack[top] = 5;
	
	top++;
	stack[top] = 10;
	
	cout << "isi stack setelah push:" << endl;
	for(int i = top; i >= 0; i--) {
		cout << stack[i] << endl;
	}
	
	cout << "Data yg keluar:" << stack[top] << endl;
	top--;
	
	cout << " stack setelah pop:" << endl;
	for(int i = top; i >= 0; i--) {
		cout << stack[i] << endl;
	}
	return 0;
}