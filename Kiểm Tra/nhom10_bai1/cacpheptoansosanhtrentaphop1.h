int kiemtracobangnhaukhong(int* A, int nA, int* B, int nB) {
    if (nA == nB) {
        for (int i = 0; i < nA; i++) {
            if (*(A + i) != *(B + i)) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}
