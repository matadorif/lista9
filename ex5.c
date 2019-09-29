#include<stdio.h>

int divisivel(int x, int y){
	if(x % y == 0){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	
	srand(time(NULL));
	
	int i, x, y, n;
	
	for(i = 0; i < 10; i++){
		x = rand() % 10;
		y = rand() % 10;
		
		n = divisivel(x,y);
		printf("%d / %d = %d\n", x, y, n);
	}
	
}
