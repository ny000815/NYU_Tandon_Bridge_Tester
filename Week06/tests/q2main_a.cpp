#include <iostream>
#include "q2.h"
using namespace std;

int main () {
    int n, m;
    char symbol;
    cin >> n;
    cin >> m;
    cin >> symbol;
    printShiftedTriangle(n, m, symbol);
    return 0;
}
