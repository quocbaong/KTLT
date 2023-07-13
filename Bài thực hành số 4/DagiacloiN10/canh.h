#include<math.h>

float P1P2(Point P1,Point P2) {
    float dx = P1.x - P2.x;
    float dy = P1.y - P2.y;
    return sqrt(dx*dx + dy*dy);
}