#include <iostream>
#include <string>
using namespace std;

const int MAX =20;
struct Stack { string data[MAX]; int top; };

void init(Stack &s) { s.top = -1; }
bool isEmpty(Stack s) { return s.top == -1; }
void push(Stack &s, string v) { if (s.top < MAX-1) s.data[++s.top] = v; }
string pop(Stack &s) { return isEmpty(s) ? "" : s.data[s.top--]; }
string peek(Stack s) { return isEmpty(s) ? "" : s.data[s.top]; }

void tampil(Stack s) {
    for (int i = s.top; i >= 0; i--)
        cout << "| " << s.data[i] << endl;
    cout << "----------" << endl;
}

void sisip(Stack &s, string target, string baru) {
    Stack tmp; init(tmp);
    while (!isEmpty(s) && peek(s) != target) push(tmp, pop(s));
    push(s, baru);
    while (!isEmpty(tmp)) push(s, pop(tmp));
}

int main() {
    Stack s; init(s);

    push(s, "Iphone"); push(s, "Windows"); push(s, "Mac");
    push(s, "Symbian"); push(s, "Maemo");

    cout << "=== AWAL ===" << endl; tampil(s);

    sisip(s, "Iphone", "Iphone 5");
    cout << "=== a. Iphone 5 ===" << endl; tampil(s);

    sisip(s, "Windows", "Windows Phone");
    cout << "=== b. Windows Phone ===" << endl; tampil(s);

    sisip(s, "Mac", "SnowLeopard");
    cout << "=== c. SnowLeopard ===" << endl; tampil(s);

    sisip(s, "Symbian", "Symbian Belle");
    cout << "=== d. Symbian Belle ===" << endl; tampil(s);

    Stack tmp; init(tmp);
    while (!isEmpty(s)) push(tmp, pop(s));
    push(s, "Maemo 4");
    while (!isEmpty(tmp)) push(s, pop(tmp));
    cout << "=== e. Maemo 4 (bottom) ===" << endl; tampil(s);

    return 0;
}