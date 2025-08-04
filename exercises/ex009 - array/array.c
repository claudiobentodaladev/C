#include<stdio.h>

//FIXED WAY
int main(){
	
	int note[3]; // Array is used to save more of one value
	float medium;
	
	
	note[0] = 14;
	note[1] = 13;
	note[2] = 16;
	
	medium = (note[0] + note[1] + note[2]) / 3;
	
	printf("Your medium is %.1f\n",medium);
	
	return 0;
}