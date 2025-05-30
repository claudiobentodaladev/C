#include<stdio.h>

int main(){
	
	int idade[6] = {15,60,5,30,20,19};
	float media = 0.0;
	
	printf("A media de : ");
	
	for(int i = 0;i < 6; i++){
		printf("%i ", idade[i]);
		media += idade[i];
	}
	printf("\n");
	media /= 6;
	
	printf("A media: %f ", media); 
	
	return 0;
}