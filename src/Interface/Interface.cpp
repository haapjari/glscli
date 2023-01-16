#include "Interface.h"

Interface::Interface(int x, int y) {
    this -> x = x;
    this -> y = y;
}

int Interface::getSum() {
    return x + y;
}