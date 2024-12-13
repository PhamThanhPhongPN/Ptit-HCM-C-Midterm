#include <stdio.h>

int main(){
	int Num;
	printf("Hay nhap mot so nguyen duong : ");
	scanf("%d",&Num);
	printf("Uoc cua so ban nhap la : ");
	for (int i = 1;i <= Num;i++){
		if (Num%i == 0){
			printf("%d ",i);
		}
	}
	return 0;
}
