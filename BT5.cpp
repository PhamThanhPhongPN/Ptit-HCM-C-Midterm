#include <stdio.h>
#include <math.h>

int main(){
	int Num;
	printf("Hay nhap mot so nguyen duong : ");
	scanf("%d",&Num);
	if (Num < 2){
		printf("%d khong phai la so nguyen to!",Num);
	}
	if (Num == 2){
		printf("%d la so nguyen to!",Num);
	}
	for (int i = 2; i <= sqrt(Num); i++){
		if (Num % i == 0){
			printf("%d khong phai la so nguyen to!",Num);
			break;
		} else {
			printf("%d la so nguyen to!",Num);
			break;
		}
	}
	return 0;
}
