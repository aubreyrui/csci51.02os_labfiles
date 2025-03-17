#include <iostream>
using namespace std;

int addTwoV1(int x) {
    x += 2;
    return x;
}

int addTwoV2(int* x) {
    *x += 2;
    return *x;
}

int main(void) {
    int x;
    x = 2;
    int *p;
    p = &x;
    cout << "add Two V1: " << addTwoV1(x) << "\n";
    cout << "add Two V2: " << addTwoV2(p) << "\n";
    return 0;
}