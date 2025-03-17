#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
   int x;
   cout << "Enter an integer: ";
   cin >> x;
   cout << "Received input: ";
   cout << endl << "Added 2, now: ";
   cout << (x+2) << endl;
   return 0;
}