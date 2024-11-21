#include <stdio.h>
int main(){
	float diemtoan, diemvan, diemanh;
	float tongdiem, diemtrungbinh;
	printf("nhap diem toan: ");
	scanf("%f", &diemtoan);
	printf("nhap diem van: ");
	scanf("%f", &diemvan);
	printf("nhap diem anh: ");
	scanf("%f", &diemanh);
	tongdiem = diemtoan + diemvan + diemanh;
	diemtrungbinh = tongdiem / 3;
	printf("tong diem toan, van, anh la %.2f\n", tongdiem);
	printf("diem trung binh la %.2f", diemtrungbinh);
	return 0;
}
