int taphopcon(int* A, int nA, int* B, int nB) {
    if(nA > nB) {
        for(int i = 0; i < nA; i++ ){
            int found = 0;
            for(int j = 0; j < nB; j++) {
                if(A[i] == B[j]) {
                    found = 1;
                    break;
                }
            }
            if(found == 0) {
                return 0; //Tap B khong phai con tap A
            }
        }
        return 1;   //Tap B la con tap A
    }
    if(nA < nB) {
        return taphopcon(B, nB, A, nA); //dao vi tri A va B de cho tap hop A luon lon hon hoac bang tap hop B.
    }
}
int roinhaukhong(int* A, int nA, int* B, int nB) {
    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (*(A + i) == *(B + j)) {
                return 0;   //co phan tu chung, khong roi nhau
            }
        }
    }
    return 1;   //khong co phan tu chung, roi nhau
}