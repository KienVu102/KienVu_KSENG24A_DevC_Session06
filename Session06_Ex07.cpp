#include <stdio.h>

int main(){
	//number: n
	int n, i=1;
	printf("Moi ban nhap 1 so nguyen: ");
	scanf("%d", &n);
	printf("Cac uoc cua %d la: ", n);
	while(n>=i){
		if(n%i == 0)
			printf("%d", n/i);
			i++;
	}
	
	return 0;
}
