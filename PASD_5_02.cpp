#include <string.h>
#include "majalah.h"
#include "objlok4.cpp"
#include <iostream>
using namespace std;

int main() {
    majalah bacaan;
    majalah bacaan1("Reihan", "Gramedia Margonda", 125);
    majalah bacaan2("Rezka", "PT. GrameDepok", 100);

    bacaan.info();
    bacaan1.info();
    bacaan2.info();
    bacaan.info();

    cin.get();
    return 0;
}