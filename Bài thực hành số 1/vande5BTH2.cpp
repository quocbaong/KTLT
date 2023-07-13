#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//Ham input() de sinh ngau nhien n phan tu va luu vao mang Q[]:
void input(int Q[], int &n) {
    srand((unsigned)time(NULL));  //Ham tao so ngau nhien
    for(int i = 0; i < n; i++) {
        Q[i] = rand()%100 - rand()%100;     //Sinh so ngau nhien va luu vao mang Q[]
    }
}
//H�m output() de hien thi cac phan tu cua Q[] len man hinh:
void output(int Q[], int n) {
    for(int i=0; i < n; i++) {
        printf("Q[%d] = %d\n", i,Q[i]);
    }
}
//H�m de quy sum_rec() de t�nh tong c�c phan tu ca d�y Q:
long sum_rec(int Q[], int n) {
    if (n == 0) {
        return 0;  // �ieu kien de dung de quy
    } else {
        return Q[n-1] + sum_rec(Q, n-1);  // C�ng thuc de quy
    }
}
//H�m t�m gi� tri lon nhat trong d�y so de quy
int max_rec(int Q[], int n) {
    if (n == 1) {
        return Q[0];
    } else {
        int max_n_1 = max_rec(Q, n-1);
        return (Q[n-1] > max_n_1) ? Q[n-1] : max_n_1;
    }
}
//H�m t�m gi� tri nho nhat trong d�y so de quy
int min_rec(int Q[], int n) {
    if (n == 1) {
        return Q[0];
    } else {
        int min_n_1 = min_rec(Q, n-1);
        return (Q[n-1] < min_n_1) ? Q[n-1] : min_n_1;
    }
}
//H�m t�nh tong d�y so bang phuong ph�p duyet tuan tu:
long sum(int Q[], int n) {
    long S = 0;
    for(int i = 0; i < n; i++) {
        S += Q[i];
    }
    return S;
}

int main() {
    int n;
    do {
        printf("Nhap gia tri n(1<=n<=100): ");
        scanf("%d", &n);
    }while(n<1 || n>100);
    int Q[n];
    printf("Cac phan tu cua mang: \n");
    input(Q,n);
    output(Q,n);
    printf("\nPhan tu lon nhat: %d", max_rec(Q,n));
    printf("\nPhan tu nho nhat: %d", min_rec(Q,n));
    printf("\nSum_rec = %ld", sum_rec(Q,n));
    printf("\nSum = %ld", sum(Q,n));
    return 0;

}

