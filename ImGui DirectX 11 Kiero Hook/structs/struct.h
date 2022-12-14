#include <math.h>

struct Vector2
{
    float x, y;
    Vector2 operator+(int i) { return Vector2(x + i, y + i); }
    Vector2 operator-(int i) { return Vector2(x - i, y - i); }
    Vector2 operator*(int i) { return Vector2(x * i, y * i); }
    Vector2 operator/(int i) { return Vector2(x / i, y / i); }

    Vector2 operator+(Vector2 vec) { return Vector2(x + vec.x, y + vec.y); }
    Vector2 operator-(Vector2 vec) { return Vector2(x - vec.x, y - vec.y); }
    Vector2 operator*(Vector2 vec) { return Vector2(x * vec.x, y * vec.y); }
    Vector2 operator/(Vector2 vec) { return Vector2(x / vec.x, y / vec.y); }
    float CenterDistance(Vector2 screen) { return float(sqrtf(powf(screen.x - x, 2.0f) + powf(screen.y - y, 2.0f))); }
};
struct Vector3 {
    float x, y, z;
    Vector3 operator+(int i) { return Vector3(x + i, y + i, z + i); }
    Vector3 operator-(int i) { return Vector3(x - i, y - i, z - i); }
    Vector3 operator*(int i) { return Vector3(x * i, y * i, z * i); }
    Vector3 operator/(int i) { return Vector3(x / i, y / i, z / i); }

    Vector3 operator+(Vector3 vec) { return Vector3(x + vec.x, y + vec.y, z + vec.z); }
    Vector3 operator-(Vector3 vec) { return Vector3(x - vec.x, y - vec.y, z - vec.z); }
    Vector3 operator*(Vector3 vec) { return Vector3(x * vec.x, y * vec.y, z * vec.z); }
    Vector3 operator/(Vector3 vec) { return Vector3(x / vec.x, y / vec.y, z / vec.z); }

    inline float Distance(Vector3 v) { return float(sqrtf(powf(v.x - x, 2.0) + powf(v.y - y, 2.0) + powf(v.z - z, 2.0))); }

};
