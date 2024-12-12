#include <stdio.h>

int main(){
	int ChuyenDoi;
	float Money, Exchange;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n\n");
	printf("Nhap don vi ban muon chuyen doi (1-8)? ");
	scanf("%d",&ChuyenDoi);
	printf("Nhap so tien ban muon chuyen doi : ");
	scanf("%f",&Money);
	switch (ChuyenDoi){
	case 1:
		Exchange = Money * 23500;
		printf("USD to VND, input: %.0f\n",Money);
		printf("%.0f USD = %.0f VND",Money,Exchange);
		break;
	case 2:
		Exchange = Money * 25000;
		printf("EUR to VND, input: %.0f\n",Money);
		printf("%.0f EUR = %.0f VND",Money,Exchange);
		break;
	case 3:
		Exchange = Money * 28000;
		printf("GBP to VND, input: %.0f\n",Money);
		printf("%.0f GBP = %.0f VND",Money,Exchange);
		break;
	case 4:
		Exchange = Money * 180;
		printf("JPY to VND, input: %.0f\n",Money);
		printf("%.0f JPY = %.0f VND",Money,Exchange);
		break;
	case 5:
		Exchange = Money / 23500;
		printf("VND to USD, input: %.0f\n",Money);
		printf("%.0f VND = %.2f USD",Money,Exchange);
		break;
	case 6:
		Exchange = Money / 25000;
		printf("VND to EUR, input: %.0f\n",Money);
		printf("%.0f VND = %.2f EUR",Money,Exchange);
		break;
	case 7:
		Exchange = Money / 28000;
		printf("VND to GBP, input: %.0f\n",Money);
		printf("%.0f VND = %.2f GBP",Money,Exchange);
		break;
	case 8:
		Exchange = Money / 180;
		printf("VND to , JPY: %.0f/n",Money);
		printf("%.0f VND = %.2f JPY",Money,Exchange);
		break;
	}
	return 0;
}
