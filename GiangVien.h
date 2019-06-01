#pragma once
#include "CanBo.h"

class GiangVien : public CanBo
{
private:
	string khoa, trinhDo;
	int soTietDay;
public:
	GiangVien();
	~GiangVien();
	void nhap();
	void xuat();
	int tinhLuong();
};

