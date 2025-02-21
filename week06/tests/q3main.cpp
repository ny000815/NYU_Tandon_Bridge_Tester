#include <iostream>
#include <iomanip>
#include "q3.h"
using namespace std;

int main () {
    int test_cases[] = { -1, 0, 1, 2, 5, 10, 20, 50, 100, 170, 171 };
    cout << fixed << setprecision(30);
    for (size_t i = 0; i < 11; i++) {
        cout << "n = " << test_cases[i] << "\t" << eApprox(test_cases[i]) << endl;
    }
    return 0;
}
