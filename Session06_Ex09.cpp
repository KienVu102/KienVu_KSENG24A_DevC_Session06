#include <stdio.h>

int main(){
	//number=n, number1=n1, number2=n2, number3=n3
	int n, n1, n2, n3;
	for(n = 100; n <= 999; n++){
		n1 = n /100;
		n2 = (n % 100) / 10;
		n3 = n % 10;
		if(n1 * n1 * n1 + n2* n2 * n2 + n3 * n3* n3 == n){
			printf("%d\n", n);
		}
	}
	return 0;
}
