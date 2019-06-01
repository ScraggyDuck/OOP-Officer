#pragma once
#include "CanBo.h"

class NhanVienHanhChinh : public CanBo
{
private: 
	string phongBan, chucVu;
	int soNgayCong;
public:
	NhanVienHanhChinh();
	~NhanVienHanhChinh();
	void nhap();
	void xuat();
	int tinhLuong();
};

