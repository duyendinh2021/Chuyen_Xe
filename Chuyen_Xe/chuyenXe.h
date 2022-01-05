#pragma once
#include<iostream>
#include<string>
using namespace std;
class chuyenXe
{
protected:
	string maChuyenXe;
	string hoTenTaiXe;
	string soxe;
	float doanhThu;
public:
	chuyenXe() {
		this->maChuyenXe = "";
		this->hoTenTaiXe = "";
		this->soxe = "";
		this->doanhThu = 0;
	}
	chuyenXe(string machuyenxe, string htTaixe, string soxe, float doanhthu) {
		this->maChuyenXe = machuyenxe;
		this->hoTenTaiXe = htTaixe;
		this->soxe = soxe;
		this->doanhThu = doanhthu;
	}
	~chuyenXe() {
		return;
	}
	virtual void nhap() {
		cout << "\nNhap vao Ma chuyen xe:";
		getline(cin, this->maChuyenXe);
		cout << "\nNhap vao Ho Ten Tai Xe:";
		getline(cin, this->hoTenTaiXe);
		cout << "\nNhap vao So Xe:";
		getline(cin, this->soxe);
	}
	virtual void xuat() {
		cout << "\nMa chuyen xe:" << this->maChuyenXe;
		cout << "\nHo Ten Tai Xe:" << this->hoTenTaiXe;
		cout << "\nSo Xe:" << this->soxe;
	}
	virtual float tinhdoanhthu() = 0;
};

