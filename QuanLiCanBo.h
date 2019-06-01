#pragma once
#include "GiangVien.h"
#include "NhanVienHanhChinh.h"
#include <vector>

class QuanLiCanBo
{
private: 
	vector<CanBo*> list;
public:
	QuanLiCanBo();
	~QuanLiCanBo();
	void menu();
	void nhap();
	void xuat();
	int tongLuong();
	void canBoLuongThapNhat();
};

