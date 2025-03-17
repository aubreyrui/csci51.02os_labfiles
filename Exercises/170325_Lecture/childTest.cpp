#include <iostream>
#include <unistd.h>
using namespace std;

int main(void) {
    int i = 0;
    cout << "hello!" << endl;
    i += 2;
    pid_t child = fork();
    i = i + 3;
    cout << "This should get printed twice" << endl;
    cout << i << endl;
}