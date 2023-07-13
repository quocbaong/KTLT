#include<iostream>  //Hỗ trợ nhập xuất
#include<fstream>   //Hỗ trọ đọc ghi file
using namespace std;
int main() {
    //Chuẩn bị file nguon.txt có 2 dòng. Dòng 1 là số phần tử, dòng 2 là giá trị các phần tử
    ifstream fileNguon("nguon.txt"); //ifstream: read from file
    //Biến fileNguuon đại diện cho nguon.txt
    ofstream fileDich("dich.txt");
    //Biến fileDich đại diện cho dich.txt
    int n,so;
    fileNguon>>n;
    for(int i = 0; i<n; i++) {
        fileNguon >> so;    //Đọc 1 số từ file
        if(so>20) {
            fileDich<<so<<"\t";     //Ghi 1 số vào file
        }
    }
    fileNguon.close();  //Đóng file
    fileDich.close();   //Đóng file
}