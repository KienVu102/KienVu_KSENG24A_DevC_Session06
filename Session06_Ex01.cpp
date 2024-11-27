#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, sum=0;
	printf("Moi ban nhap 5 so nguyen bat ki: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	if(n1 % 2 != 0){
		sum += n1;
	}
	if(n2 % 2 != 0){
		sum += n2;
	}
	if(n3 % 2 != 0){
		sum += n3;
	}
	if(n4 % 2 != 0){
		sum += n4;
	}
	if(n5 % 2 != 0){
		sum += n5;
	}
	printf("Tong cac so le dang co la: %d", sum);
	
	return 0;
}
