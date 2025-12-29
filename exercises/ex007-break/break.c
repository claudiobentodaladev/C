#include<stdio.h>
#include<stdlib.h>

int main(){
	
	for(int i = 0;i <= 10;i++){
		printf("%d, ",i);
		if(i == 3){
			break; //break is used to stop a block code
		}
	}
	return 0;
}