#include <stdio.h>

int main(){
	//Day=d, Month=m, Year=y, leapyear=ly, correctmonth=cm
	int d, m, y, ly=0, cm=1;
	printf("Hay nhap thang ban muon: ");
	scanf("%d", &m);
	printf("Hay nhap nam ban muon: ");
	scanf("%d", &y);
	if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
		ly=1;
	}  
	if(m<1 || m>12){
		cm=0;
	}
	if(cm){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			d=31;
		}
		else if(m==4 || m==6 || m==9 || m==11){
			d=30;
		}
		else if(m==2){
			if(ly=1){
				d=29;
			}else{
				d=28;
			}
		}
	}
	printf("Vay la thang %d nam %d co %d ngay", m, y, d);
	return 0; 
} 
