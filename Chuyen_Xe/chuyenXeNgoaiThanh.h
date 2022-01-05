#pragma once
#include "chuyenXe.h"
class chuyenXeNgoaiThanh :
    public chuyenXe
{
private:
    int soNgay;
    string noiDen;
public:
    chuyenXeNgoaiThanh() {
        this->maChuyenXe = "";
        this->hoTenTaiXe = "";
        this->soxe = "";
        this->doanhThu = 0;
        this->soNgay = 0;
        this->noiDen = "";
    }
    chuyenXeNgoaiThanh(string machuyenxe, string htTaixe, string soxe, float doanhthu, int songay, string noiDen) {
        this->maChuyenXe = machuyenxe;
        this->hoTenTaiXe = htTaixe;
        this->soxe = soxe;
        this->doanhThu = doanhthu;
        this->soNgay = songay;
        this->noiDen = noiDen;
    }
    ~chuyenXeNgoaiThanh() {
        return;
    }
    void nhap() {
        chuyenXe::nhap();
        cout << "\nNhap so ngay:";
        cin >> this->soNgay;
        cout << "\nNhap noi Den:";
        getline(cin, this->noiDen);
    }
    void xuat() {
        chuyenXe::xuat();
        cout << "\nSo Ngay:" << this->soNgay;
        cout << "\nNoi den:" << this->noiDen;
    }
    float tinhdoanhthu() {
        return 1;
    }
};

