#include<stdio.h>

int main(){
	
	for(int i = 0;i < 10;i++){
		if(i == 5){
			continue; // continue is used to skip a block code to next 
		}
		printf("%d, ",i);
	}
}