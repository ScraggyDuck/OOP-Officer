#include "NhanVienHanhChinh.h"



NhanVienHanhChinh::NhanVienHanhChinh()
{
}


NhanVienHanhChinh::~NhanVienHanhChinh()
{
}

void NhanVienHanhChinh::nhap()
{
	CanBo::nhap();
	cin.ignore();
	cout << "Nhap ten phong ban: ";
	getline(cin, phongBan);
	int lc;
	cout << "Nhap chuc vu: \n1. Truong phong \n2. Pho phong \n3. Nhan vien\n";
	cin >> lc;
	switch (lc) {
	case 1:
		chucVu = "Truong phong";
		setPhuCap(2000);
		break;
	case 2:
		chucVu = "Pho phong";
		setPhuCap(1000);
		break;
	case 3:
		chucVu = "Nhan vien";
		setPhuCap(500);
		break;
	};
	cout << "Nhap so ngay cong: ";
	cin >> soNgayCong;
}

void NhanVienHanhChinh::xuat()
{
	cout << "Nhan vien hanh chinh!\n";
	CanBo::xuat();
	cout << "Phong ban: " << phongBan << endl;
	cout << "Phu cap: " << phuCap << endl;
	cout << "So ngay cong: " << soNgayCong << endl;
	cout << "Luong: " << tinhLuong() << endl;
}

int NhanVienHanhChinh::tinhLuong()
{
	return heSoLuong * 730 + phuCap + soNgayCong*200;
}

