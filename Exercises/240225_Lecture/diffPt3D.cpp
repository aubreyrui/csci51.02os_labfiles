struct Point3D {
    int x;
    int y;
    int z;
};

int diffPt3D(Point3D p, Point3D q) {
    return (p.x - q.x);
}