#pragma once
#include <iostream>
#include <string>
using namespace std;

class CanBo
{
protected:
	string hoTen;
	int phuCap, heSoLuong;
public:
	CanBo();
	~CanBo();
	virtual void nhap();
	virtual void xuat();
	void setPhuCap(int phuCap);
	virtual int tinhLuong();
};

