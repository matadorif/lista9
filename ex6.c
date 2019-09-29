#include<stdio.h>

int idTecla(char* tecla){
	if(tecla != "A" && tecla != "B" && tecla != "C" && tecla != "D" && tecla != "E" && tecla != "F" && tecla != "G" && tecla != "H" && tecla != "I" && tecla != "J" && tecla != "K" && tecla != "L" && tecla != "M" && tecla != "N" && tecla != "O" && tecla != "P" && tecla != "Q" && tecla != "R" && tecla != "S" && tecla != "T" && tecla != "U" && tecla != "V" && tecla != "W" && tecla != "X" && tecla != "Y" && tecla != "Z"){
		return 0;
	}else{
		return 1;
	}
}


int main(){
	
	int tecla;
	tecla = idTecla("A");
	printf("%d", tecla);
	
}
