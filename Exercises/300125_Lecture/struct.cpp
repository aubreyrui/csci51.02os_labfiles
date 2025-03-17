#include <iostream>
#include "Point3D.hpp"
using namespace std;

int main( void )
{
/*     Point3D p;
    Point3D* q;
    p.x = 5;
    p.y = -2;
    p.z = 999;
    cout << p.x << endl;
    q = &p;
    q->x = 1000; */
    Point3D point(1, 2, 3);
    cout << point.x << " " << point.y;
    cout << " " << point.z << endl;
}
