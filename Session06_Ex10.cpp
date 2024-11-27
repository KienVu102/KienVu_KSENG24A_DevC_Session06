#include <stdio.h>

int main(){
	int n, SNT, i;
    printf("Hay nhap 1 so nguyen bat ki: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
    	if(n % i == 0){
    		SNT++;
    	}
    }
	if(SNT == 2){
    		printf("Day la so nguyen to");
		}
		else{
			printf("Day khong phai la so nguyen to");
		}
	
	
    return 0;
}
