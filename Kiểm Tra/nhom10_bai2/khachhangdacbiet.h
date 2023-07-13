#include"data.h"
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
char* timkhachhangdacbiet(khachhang* kh, int soLuongKhachhang) {
    int* dem = new int[soLuongKhachhang];
    for(int i = 0; i < soLuongKhachhang; i++) {
        dem[i] = 0; 
    }
    for(int i = 0; i < soLuongKhachhang; i++) {
        for (int j = i + 1; j < soLuongKhachhang; j++) {
            if (strcmp(kh[i].maKH, kh[j].maKH) == 0) {
                dem[i]++;
                dem[j]++;
            }
        }
    }
    int max = dem[0];
    int index = 0;
    for (int i = 1; i < soLuongKhachhang; i++) {
        if (dem[i] > max) {
            max = dem[i];
            index = i;
        }
    }
    char* khachHangDacBiet = new char[strlen(kh[index].maKH) + 1];
    strcpy(khachHangDacBiet, kh[index].maKH);
    delete[] dem;
    return khachHangDacBiet;
}

void DocDataVaGhiThanhFileKhac(int n){
    //Tim khach hang dac biet
    khachhang* kh = new khachhang[n];
    ifstream bienDocTuFile("KhachHang.txt", ios::binary);
    for (int i = 0; i < n; i++) {
        bienDocTuFile.read((char*)&kh[i], sizeof(khachhang));
    }
    char* maKHDacBiet = timkhachhangdacbiet(kh, n);
    delete[] kh;
    bienDocTuFile.close();
    // Ghi thong tin khach hang dac biet vao file khachhangdacbiet.txt
    ifstream bienDocTuFile2("KhachHang.txt", ios::binary);
    ofstream bienGhiFileKhac("KhachHangDacBiet.txt", ios::binary);
    khachhang khachHang;
    while (bienDocTuFile2.read((char*)&khachHang, sizeof(khachhang))) {
        if (strcmp(khachHang.maKH, maKHDacBiet) == 0) {
            bienGhiFileKhac.write((char*)&khachHang, sizeof(khachhang));
        }
    }
    bienDocTuFile2.close();
    bienGhiFileKhac.close();
}
