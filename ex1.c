#include<stdio.h>

char mes(int n1){
	
	if(n1 == 1){
		printf("Janeiro");
	}
	else if(n1 == 2){
		printf("Fevereiro");
	}
	else if(n1 == 3){
		printf("Marco");
	}
	else if(n1 == 4){
		printf("Abril");
	}
	else if(n1 == 5){
		printf("Maio");
	}
	else if(n1 == 6){
		printf("Junho");
	}
	else if(n1 == 7){
		printf("Julho");
	}
	else if(n1 == 8){
		printf("Agosto");
	}
	else if(n1 == 9){
		printf("Setembro");
	}
	else if(n1 == 10){
		printf("Outubro");
	}
	else if(n1 == 11){
		printf("Novembro");
	}
	else if(n1 == 12){
		printf("Dezembro");
	}
	else{
		printf("Erro");
	}
}

int main(){
	
	char r[99];
	
	r[99] = mes(1);
	
	printf("%s", r);
	
}
