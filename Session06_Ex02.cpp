#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, sole=0, sochan=0;
	printf("Moi ban nhap 5 so nguyen bat ki: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	if(n1 % 2 == 0){
		sochan += 1;
	}else{
		sole +=1;
	}
	if(n2 % 2 == 0){
		sochan += 1;
	}else{
		sole +=1;
	}
	if(n3 % 2 == 0){
		sochan += 1;
	}else{
		sole +=1;
	}
	if(n4 % 2 == 0){
		sochan += 1;
	}else{
		sole +=1;
	}
	if(n5 % 2 == 0){
		sochan += 1;
	}else{
		sole +=1;
	}
	printf("So luong so le la: %d\n", sole);
	printf("So luong so chan la: %d", sochan);
	
	return 0;
}
