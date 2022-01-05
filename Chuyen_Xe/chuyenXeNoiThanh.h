#pragma once
#include"chuyenXe.h"
class chuyenXeNoiThanh:public chuyenXe
{
private:
	float soKm;
	int soTuyen;
public:
	chuyenXeNoiThanh() {
		this->maChuyenXe = "";
		this->hoTenTaiXe = "";
		this->soxe = "";
		this->doanhThu = 0;
		this->soTuyen = 0;
		this->soKm = 0;
	}
	chuyenXeNoiThanh(string machuyenxe, string htTaixe, string soxe, float doanhthu,float sokm, int sotuyen) {
		this->maChuyenXe = machuyenxe;
		this->hoTenTaiXe = htTaixe;
		this->soxe = soxe;
		this->doanhThu = doanhthu;
		this->soKm = sokm;
		this->soTuyen = sotuyen;
	}
	~chuyenXeNoiThanh() {
		return;
	}
	void nhap() {
		chuyenXe::nhap();
		cout << "\nNhap vao So Km:";
		cin >> this->soKm;
		cout << "\nNhap vao So Tuyen:";
		cin >> this->soTuyen;
	}
	void xuat() {
		chuyenXe::nhap();
		cout << "\nSo Km :" << this->soKm;
		cout << "\nSo Tuyen:" << this->soTuyen;
	}
	float tinhdoanhthu() {
		return 1;
	}
};

