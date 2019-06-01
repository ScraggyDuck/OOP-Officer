#include "QuanLiCanBo.h"



QuanLiCanBo::QuanLiCanBo()
{
}


QuanLiCanBo::~QuanLiCanBo()
{
}

void QuanLiCanBo::menu()
{
	int lc;
	do {
		system("cls");
		cout << "===============================================\n";
		cout << "===============QUAN LI CAN BO==================\n";
		cout << "\n1. Nhap thong tin can bo";
		cout << "\n2. Xuat thong tin can bo";
		cout << "\n0. Ket thuc!";
		cout << "\n===============================================\n\n";
		cout << "\nNhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 0:
			break;
		case 1:
			nhap();
			break;
		case 2:
			xuat();
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			break;
		}
	} while (lc != 0);
}


void QuanLiCanBo::nhap()
{
	CanBo* CB = new CanBo;
	int lc;
	do {
		system("cls");
		cout << "===============================================\n";
		cout << "===============QUAN LI CAN BO==================\n";
		cout << "\n1. Nhap thong tin giang vien";
		cout << "\n2. Nhap thong tin nhan vien hanh chinh";
		cout << "\n0. Ket thuc!";
		cout << "\n===============================================\n\n";
		cout << "\nNhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 0:
			break;
		case 1:
			CB = new GiangVien;
			CB->nhap();
			list.push_back(CB);
			break;
		case 2:
			CB = new NhanVienHanhChinh;
			CB->nhap();
			list.push_back(CB);
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			system("pause");
			break;
		}

	} while (lc != 0);
}

int QuanLiCanBo::tongLuong()
{
	int total = 0;
	int n = list.size();
	for (int i = 0; i < n; i++)
		total += list[i]->tinhLuong();
	return total;
}

void QuanLiCanBo::canBoLuongThapNhat()
{
	int mark = 0;
	float min = list[0]->tinhLuong();
	int n = list.size();
	for (int i = 1; i < n; i++)
		if (list[i]->tinhLuong() < min) {
			mark = i;
			min = list[i]->tinhLuong();
		}
	list[mark]->xuat();
}

void QuanLiCanBo::xuat()
{
	int lc;
	int n = list.size();
	do {
		system("cls");
		cout << "===============================================\n";
		cout << "===============QUAN LI CAN BO==================\n";
		cout << "\n1. Xuat danh sach can bo";
		cout << "\n2. Tong so luong can phai tra";
		cout << "\n3. Can bo co luong thap nhat";
		cout << "\n0. Ket thuc!";
		cout << "\n===============================================\n\n";
		cout << "\nNhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 0:
			break;
		case 1:
			cout << "\n=======THONG TIN DANH SACH CAN BO!!!========\n\n";
			cout << "\nTong so can bo : " << n << " can bo.\n\n";
			for (int i = 0; i < n; i++) {
				cout << "\n===============================================\n";
				cout << "\nCan bo thu " << i + 1 << endl;
				list[i]->xuat();
				cout << "\n===============================================\n";
			}
			break;
		case 2:
			cout << "\n===============================================\n";
			cout << "\nTong so luong can phai tra la: " << tongLuong() << endl;
			cout << "\n===============================================\n";
			break;
		case 3:
			cout << "\n===============================================\n";
			cout << "\nThong tin can bo co luong thap nhat:\n";
			canBoLuongThapNhat();
			cout << "\n===============================================\n";
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			break;
		}
		system("pause");
	} while (lc != 0);
}
