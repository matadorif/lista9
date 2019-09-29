#include<stdio.h>

float media(int n1, int n2, int n3){
	float media = (float)(n1 + n2 + n3) / 3;
	return media;
}

int main(){
	
	float m;
	
	m = media(34, 55, 60);
	printf("%f", m);
	
}
