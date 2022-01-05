#pragma once
#include"chuyenXeNgoaiThanh.h"
#include"chuyenXeNoiThanh.h"
class CongTy
{
private:
	string tenCongTy;
	chuyenXe** dsChuyenXe;
	int soLuong;
public:
	CongTy() {
		this->tenCongTy = "";
		this->soLuong = 0;
		this->dsChuyenXe = new chuyenXe * [this->soLuong];
	}
	CongTy(string tenct, int soluong) {
		this->tenCongTy = tenct;
		this->soLuong = soLuong;
		this->dsChuyenXe = new chuyenXe * [this->soLuong];
	}
	~CongTy() {
		return;
	}
	void dschuyenxengoaithanh() {
		int k = 0;
		chuyenXe* nt = new chuyenXeNgoaiThanh("01", "TX01", "X01", 10000, 7, "TP.HCM");
		chuyenXe* nt2 = new chuyenXeNgoaiThanh("02", "TX02", "X02", 20000, 7, "HN");
		chuyenXe* nt3 = new chuyenXeNgoaiThanh("03", "TX03", "X03", 40000, 7, "TP.HCM");
		chuyenXe* nt4 = new chuyenXeNgoaiThanh("04", "TX04", "X04", 30000, 7, "TP.HCM");
		this->dsChuyenXe[k++] = nt;
		this->dsChuyenXe[k++] = nt2;
		this->dsChuyenXe[k++] = nt3;
		this->dsChuyenXe[k++] = nt4;
		for (int i = 0; i < k; i++)
		{
			this->dsChuyenXe[i]->xuat();
		}
	}
	void xuat() {
		cout << "\n";
	}
};

