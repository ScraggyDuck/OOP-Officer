#include "GiangVien.h"



GiangVien::GiangVien()
{
}


GiangVien::~GiangVien()
{
}

void GiangVien::nhap()
{
	CanBo::nhap();
	cin.ignore();
	cout << "Nhap ten khoa: ";
	getline(cin, khoa);
	int lc;
	cout << "Nhap trinh do: \n1. Cu nhan \n2. Thac si \n3. Tien si\n";
	cin >> lc;
	switch (lc) {
	case 1:
		trinhDo = "Cu nhan";
		setPhuCap(300);
		break;
	case 2:
		trinhDo = "Thac si";
		setPhuCap(500);
		break;
	case 3:
		trinhDo = "Tien si";
		setPhuCap(1000);
		break;
	};
	cout << "Nhap so tiet day: ";
	cin >> soTietDay;
}

void GiangVien::xuat()
{
	cout << "Giang vien!\n";
	CanBo::xuat();
	cout << "Khoa: " << khoa << endl;
	cout << "Phu cap: " << phuCap << endl;
	cout << "So tiet day: " << soTietDay << endl;
	cout << "Luong: " << tinhLuong() << endl;
}

int GiangVien::tinhLuong()
{
	return heSoLuong * 730 + phuCap + soTietDay * 45;
}
