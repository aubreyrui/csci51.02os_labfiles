#include <iostream>
#include "Point3D.hpp"
using namespace std;

int main( void )
{
    Point3D* p = new Point3D(7,7,7); // when pointer p is declared, memory is allocated to it
    cout << p->x << " " << p->y; 
    cout << " " << p->z << endl;
    delete p;
    p = NULL;
    int* dynamicArray;
    int len = 10;
    dynamicArray = new int[len];
    delete[] dyanmicArray;
    return 0;
}
