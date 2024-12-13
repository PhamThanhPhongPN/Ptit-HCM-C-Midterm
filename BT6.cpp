#include <stdio.h>
#include <math.h>

bool IsNumPrime(int Num){
	if (Num < 2) return false;
	for (int i = 2; i <= sqrt(Num);i++){
		if (Num % i == 0) return false;
	}
	return true;
}

int main(){
	int Nums,Count,Num;
	printf("Hay nhap bao nhieu so nguyen to ma ban muon biet : ");
	scanf("%d",&Nums);
	Count = 2;
	while (Num < Nums +1){
		if (IsNumPrime(Count)){
			printf("%d ",Count);
			Num++;
		}
		Count++;
	}
	return 0;
}
