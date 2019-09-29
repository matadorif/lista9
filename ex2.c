#include<stdio.h>

char numeroEscrito(int n1){
	
	if(n1 == 1){
		printf("Um");
	}
	else if(n1 == 2){
		printf("Dois");
	}
	else if(n1 == 3){
		printf("Tres");
	}
	else if(n1 == 4){
		printf("Quatro");
	}
	else if(n1 == 5){
		printf("Cinco");
	}
	else if(n1 == 6){
		printf("Seis");
	}
	else if(n1 == 7){
		printf("Sete");
	}
	else if(n1 == 8){
		printf("Oito");
	}
	else if(n1 == 9){
		printf("Nove");
	}
	else if(n1 == 10){
		printf("Dez");
	}else{
		printf("Erro");
	}
}

int main(){
	
	char n[99];
	
	n[99] = numeroEscrito(1);
	printf("%s", n);
	
}
