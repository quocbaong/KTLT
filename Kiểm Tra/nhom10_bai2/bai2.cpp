#include <iostream>
#include <string.h>
#include <fstream>
#define MAX 100
#include"data.h"
#include"phantich.h"
#include"loaikhachhang.h"
#include"khachhangdacbiet.h"
using namespace std;

int main(){
	khachhang ds[MAX];
	int n;
	docfile(ds,n);
	tongve(ds,n);
	ChiaKhachHangRaFile(ds,n);
	 DocDataVaGhiThanhFileKhac(n);
}

