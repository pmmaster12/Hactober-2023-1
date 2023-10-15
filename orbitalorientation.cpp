#include <iostream>
#include <vector>

struct Vector3D {
    double x, y, z;
    
    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}
};

Vector3D crossProduct(const Vector3D& v1, const Vector3D& v2) {
    double x = v1.y * v2.z - v1.z * v2.y;
    double y = v1.z * v2.x - v1.x * v2.z;
    double z = v1.x * v2.y - v1.y * v2.x;
    return Vector3D(x, y, z);
}

int main() {
    // Position vector
    Vector3D position(3.0, 4.0, 0.0); // Example position vector (x, y, z)

    // Linear momentum vector
    Vector3D linearMomentum(2.0, 1.0, 0.0); // Example linear momentum vector (px, py, pz)

    // Calculate orbital momentum
    Vector3D orbitalMomentum = crossProduct(position, linearMomentum);

    std::cout << "Orbital Momentum (Lx, Ly, Lz): " << "(" << orbitalMomentum.x << ", " << orbitalMomentum.y << ", " << orbitalMomentum.z << ")" << std::endl;

    return 0;
}
