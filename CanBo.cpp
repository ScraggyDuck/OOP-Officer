#include "CanBo.h"



CanBo::CanBo()
{
}


CanBo::~CanBo()
{
}

void CanBo::nhap()
{
	fflush(stdin);
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap he so luong: ";
	cin >> heSoLuong;
}

void CanBo::xuat()
{
	cout << "Ho va ten: " << hoTen << endl;
	cout << "He so luong: " << heSoLuong << endl;
}

void CanBo::setPhuCap(int phuCap)
{
	this->phuCap = phuCap;
}

int CanBo::tinhLuong()
{
	return 0;
}
