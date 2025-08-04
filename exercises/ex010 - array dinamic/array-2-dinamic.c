#include<stdio.h>
//DINAMIC WAY-ish
int main (){
	int note[3] = {14,13,16};
	float medium = 0.0;
	
	for(int i = 0 ; i < 3;i++){
		medium += note[i];
	}
	medium /= 3;
	
	printf(" Your medium is %.1f\n",medium);
	
	return 0;
}