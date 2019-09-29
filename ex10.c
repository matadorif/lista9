#include<stdio.h>

float piso(float n1){
	float dif = n1 - (int)n1;
	if(dif < 1.0 && dif != 0){
		int piso = n1;
		return piso;
	}else if(dif == 0.0){
		int piso = n1 - 1;
		return piso;
	}

}

int teto(float n1){
	int teto = (int)n1 + 1;
	return teto;
}




int main(){
	
	int p, t;
	float valor;
	printf("Digite um valor decimal: ");
	scanf("%f", &valor);
	
	p = piso(valor);
	t = teto(valor);
	printf("Piso: %d\n", p);
	printf("Teto: %d", t);
	
}
