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
//Hàm output() de hien thi cac phan tu cua Q[] len man hinh:
void output(int Q[], int n) {
    for(int i=0; i < n; i++) {
        printf("Q[%d] = %d\n", i,Q[i]);
    }
}
//Hàm de quy sum_rec() de tính tong các phan tu ca dãy Q:
long sum_rec(int Q[], int n) {
    if (n == 0) {
        return 0;  // Ðieu kien de dung de quy
    } else {
        return Q[n-1] + sum_rec(Q, n-1);  // Công thuc de quy
    }
}
//Hàm tìm giá tri lon nhat trong dãy so de quy
int max_rec(int Q[], int n) {
    if (n == 1) {
        return Q[0];
    } else {
        int max_n_1 = max_rec(Q, n-1);
        return (Q[n-1] > max_n_1) ? Q[n-1] : max_n_1;
    }
}
//Hàm tìm giá tri nho nhat trong dãy so de quy
int min_rec(int Q[], int n) {
    if (n == 1) {
        return Q[0];
    } else {
        int min_n_1 = min_rec(Q, n-1);
        return (Q[n-1] < min_n_1) ? Q[n-1] : min_n_1;
    }
}
//Hàm tính tong dãy so bang phuong pháp duyet tuan tu:
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

