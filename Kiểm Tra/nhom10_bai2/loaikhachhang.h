void ChiaKhachHangRaFile(DanhSachKhachHang dsKH[] int &n){
	ofstream Filekhachhang1chieu("khachhang1chieu.txt");
	ofstream Filekhachhang2chieu("khachhang2chieu.txt");
	for(int k=0; k<n; k++)
	KhachHang kh = dsKH.khachHang[i];
	if (kh.loaiVe == 1) {
            Filekhachhang1chieu.write((char*)&dsKH[k],sizeof(dsKH[k]));
        else {
           	Filekhachhang2chieu.write((char*)&dsKH[k],sizeof(dsKHk]));
        }
    }
		
	Filekhachhang1chieu.close();
	Filekhachhang2chieu.close();
}

