#include"CongTy.h"
int main() {
	CongTy *Ct = new CongTy();
	//gọi hàm khơi chuyến xe ngoai thanh

	Ct->dschuyenxengoaithanh();

	delete Ct;
	return 0;
}