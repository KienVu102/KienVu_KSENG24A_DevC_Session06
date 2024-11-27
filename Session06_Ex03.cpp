#include <stdio.h>

int main(){
	int number;
	while(1){
		printf("Hay nhap mat khau gom 4 chu so: ");
		scanf("%d", &number);
		if (number==1234){
			printf("Mat khau chinh xac !");
			goto end;
		}
		else{
			printf("Nhap lai mat khau !\n");
		}
	}
	end:
	return 0;
}
