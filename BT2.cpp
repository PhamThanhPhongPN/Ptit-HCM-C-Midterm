#include <stdio.h>

int main(){
	float Hour, PayPerHour, Pay, PayPhuCap;
	printf("Nhap so gio lam viec trong thang : ");
	scanf("%f",&Hour);
	printf("Nhap muc luong theo gio : ");
	scanf("%f",&PayPerHour);
	Pay = Hour*PayPerHour;
	if (Hour > 160){
		PayPhuCap = Pay + Pay*0.1;
		printf("Muc luong co ban la %.2f nghin dong\n",Pay);
		printf("Muc luong co them phu cap la %.2f nghin dong",PayPhuCap);
	} else {
			printf("Muc luong co ban la %.2f\n",Pay);
		}
	return 0;
}
