#include<stdio.h>

int intervalo(char* c1, char* c2){
	char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int n[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
	
	if(c1 == c2){
		return 0;
	}else if(c1 == 'a' || c2 == 'a'){
		c1 = (int)n[1];
		c2 = (int)n[1];
	}
	
}


int main(){
	
	int a;
	
	a = intervalo("a", "z");
	printf("%d", a);
	
	
}
