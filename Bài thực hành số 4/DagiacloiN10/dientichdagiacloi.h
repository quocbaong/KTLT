#include<math.h>

float S(PointArray A, int n) {
	float S = 0;
	for(int i = 1; i < n-1; i++) {
		S += SP1P2P3(A[0], A[i], A[i+1]);
	}
	return S;
}