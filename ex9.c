#include<stdio.h>
#include<math.h>

float sig(float n1){
	float sig = 1 / (1 + pow(2.71828, n1));
	return sig;
	
}



int main(){
	
	float s;
	
	s = sig(3.4);
	printf("%f", s);
	
}
