#include <stdio.h>

int main(){
	int month;
	//money: tien, moneyinterest: tien lai, principalamount: tien goc, moneyreceived: tien nhan duoc
	float money, moneyinterest, moneyreceived=0, principalamount;
	printf("Nhap so tien ban muon gui: ");
	scanf("%f", &money);
	principalamount=money;
	printf("Nhap so thang ban muon gui: ");
	scanf("%d", &month);
	for( int i=1; i<=month; i++ ){
		money += money*0.01;
	}
	moneyreceived=money;
	printf("So tien nhan duoc sau %d thang gui la: %.3f\n", month, moneyreceived);
	
	moneyinterest = moneyreceived - principalamount;
	printf("So tien lai nhan duoc la: %.3f\n", moneyinterest);
	
	return 0;
}
