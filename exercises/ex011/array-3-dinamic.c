#include<stdio.h>

int main (){
	int note[3] = {0,0,0};
	float medium = 0.0;
	
	for(int i = 0;i < 3;i++){
		printf("Input note %d:\n",i);
		scanf("%d",&note[i]);
		medium += note[i];
	}
	medium /= 3;

	printf("===========RESULTED===========\n");
	for(int i = 0;i < 3; i++){
		printf("Note: %d\n",note[i]);
	}
	printf("Medium: %.2f\n",medium);
	
	return 0;
}