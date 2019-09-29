#include<stdio.h>

char roman(int n1){
	if(n1 == 1){
		printf("I");
	}else if(n1 == 2){
		printf("II");
	}else if(n1 == 3){
		printf("III");
	}else if(n1 == 4){
		printf("IV");
	}else if(n1 == 5){
		printf("V");
	}else if(n1 == 6){
		printf("VI");
	}else if(n1 == 7){
		printf("VII");
	}else if(n1 == 8){
		printf("VIII");
	}else if(n1 == 9){
		printf("IX");
	}else if(n1 == 10){
		printf("X");
	}else if(n1 == 11){
		printf("XI");
	}else if(n1 == 12){
		printf("XII");
	}else if(n1 == 13){
		printf("XIII");
	}else if(n1 == 14){
		printf("XIV");
	}else if(n1 == 15){
		printf("XV");
	}else if(n1 == 16){
		printf("XVI");
	}else if(n1 == 17){
		printf("XVII");
	}else if(n1 == 18){
		printf("XVIII");
	}else if(n1 == 19){
		printf("XIX");
	}else if(n1 == 20){
		printf("XX");
	}else if(n1 == 21){
		printf("XXI");
	}else if(n1 == 22){
		printf("XXII");
	}else if(n1 == 23){
		printf("XIII");
	}else if(n1 == 24){
		printf("XXIV");
	}else if(n1 == 25){
		printf("XXV");
	}else if(n1 == 26){
		printf("XXVI");
	}else if(n1 == 27){
		printf("XXVII");
	}else if(n1 == 28){
		printf("XXVIII");
	}else if(n1 == 29){
		printf("XXIX");
	}else if(n1 == 30){
		printf("XXX");
	}else if(n1 == 31){
		printf("XXXI");
	}else if(n1 == 32){
		printf("XXXII");
	}else if(n1 == 33){
		printf("XXXIII");
	}else if(n1 == 34){
		printf("XXXIV");
	}else if(n1 == 35){
		printf("XXXV");
	}else if(n1 == 36){
		printf("XXXVI");
	}else if(n1 == 37){
		printf("XXXVII");
	}else if(n1 == 38){
		printf("XXXVIII");
	}else if(n1 == 39){
		printf("XXXIX");
	}else if(n1 == 40){
		printf("XL");
	}else if(n1 == 41){
		printf("XLI");
	}else if(n1 == 42){
		printf("XLII");
	}else if(n1 == 43){
		printf("XLIII");
	}else if(n1 == 44){
		printf("XLIV");
	}else if(n1 == 45){
		printf("XLV");
	}else if(n1 == 46){
		printf("XLVI");
	}else if(n1 == 47){
		printf("XLVII");
	}else if(n1 == 48){
		printf("XLVIII");
	}else if(n1 == 49){
		printf("XLIV");
	}else if(n1 == 50){
		printf("L");
	}
}

int main(){
	
	char n;
	
	n = roman(12);
	printf("%s", n);
	
}
