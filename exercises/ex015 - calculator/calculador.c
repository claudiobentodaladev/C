#include<stdio.h>

float soma( float n1,float n2){
	float s = n1 + n2;
	return s;
}
float sub( float n1,float n2){
	float s = n1 - n2;
	return s;
}
float mult( float n1,float n2){
	float s = n1 * n2;
	return s;
}
float div( float n1,float n2){
	float s = n1 / n2;
	return s;
}

int main(){
	
	float numero1,numero2;
	int operador;
	
	printf("====CALCULADORA=====\n");
	
	printf("insire primeiro numero: \n");
	scanf("%f", &numero1);
	
	while(operador > 4 || operador <= 0){
		printf("====TIPO DE OPERACAO ARITMETRICA=====\n");
	
		printf("+(1), -(2), /(3), X(4) \n");
		scanf("%d", &operador);
	}
	
	
	printf("insire segundo numero: \n");
	scanf("%f", &numero2);
	
	printf("====RESULTADO=====\n");
	if(operador == 1){
		printf("%.1f \n", soma(numero1,numero2));	
	} else if(operador == 2){
		printf("%.1f \n", sub(numero1,numero2));
	} else if(operador == 3){
		printf("%.1f \n", mult(numero1,numero2));	
	} else if(operador == 4){
		printf("%.1f \n", div(numero1,numero2));
	}
	
	return 0;
}