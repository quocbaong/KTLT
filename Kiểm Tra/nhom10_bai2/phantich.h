void docfile(khachhang ds[],int &n){
	n=0;
	khachhang kh;
	ifstream mo(" KhachHang.txt");
	while(mo.read((char *)&kh,sizeof(kh))) {
		printf("\t\t\t%s %d\n",kh.maKH,kh.loaiVe);
		ds[n++]=kh;
	} mo.close();
}

void tongve(khachhang ds[],int n){
	int tong=0;
	for(int i=0;i<n;i++) {
		if(ds[i].loaiVe==1||ds[i].loaiVe==2) tong++;
	} 
	printf("tong so ve la:%d", tong);
}
