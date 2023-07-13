#include<math.h>

float SP1P2P3(Point P1,Point P2, Point P3) {
    float a = P1P2(P1, P2);
    float b = P1P2(P2, P3);
    float c = P1P2(P1, P3);
    if(a + b <= c || a + c <= b || b + c <= a){
        return 0;
    }
    float p = (a + b + c)/2;
    float S = p*(p-a)*(p-b)*(p-c);
    return sqrt(S);
}