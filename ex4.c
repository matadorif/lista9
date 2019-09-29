#include<stdio.h>
#include<locale.h>

char data(int n1){
	setlocale(LC_ALL, "");
	
	int n;
	if(n1 > 0 && n1 <= 31){
		printf("%d/Janeiro/2019", n1);
	}else if(n1 > 31 && n1 <= 59){
		n = n1 - 31;
		printf("%d/Fevereio/2019", n);
	}else if(n1 > 59 && n1 <= 90){
		n = n1 - 59;
		printf("%d/Março/2019", n);
	}else if(n1 > 90 && n1 <= 120){
		n = n1 - 90;
		printf("%d/Abril/2019", n);
	}else if(n1 > 120 && n1 <= 151){
		n = n1 - 120;
		printf("%d/Maio/2019", n);
	}else if(n1 > 151 && n1 <= 181){
		n = n1 - 151;
		printf("%d/Junho/2019", n);
	}else if(n1 > 181 && n1 <= 212){
		n = n1 - 181;
		printf("%d/Julho/2019", n);
	}else if(n1 > 212 && n1 <= 243){
		n = n1 - 212;
		printf("%d/Agosto/2019", n);
	}else if(n1 > 243 && n1 <= 273){
		n = n1 - 243;
		printf("%d/Setembro/2019", n);
	}else if(n1 > 273 && n1 <= 304){
		n = n1 - 273;
		printf("%d/Outubro/2019", n);
	}else if(n1 > 304 && n1 <= 334){
		n = n1 - 304;
		printf("%d/Novembro/2019", n);
	}else if(n1 > 334 && n1 <= 365){
		n = n1 - 334;
		printf("%d/Dezembro/2019", n);
	}
}

int main(){
	
	char n[99];
	n[99] = data(365);
	printf("%s", n);
	
}
