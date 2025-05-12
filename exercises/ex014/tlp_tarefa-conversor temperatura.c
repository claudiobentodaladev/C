#include <stdio.h>
#include <stdlib.h>

float fahrenheit(float celcius){
	float fahrenheit = 32;
	fahrenheit += celcius + (celcius*0.8);
	return fahrenheit;
}
float kelvin(float celcius){
	float kelvin = 273.1;
	kelvin += celcius;
	return kelvin;
}

int main(){
	
	float celcius_valor = 0.0,kelvin_,fahrenheit_;
	
	printf("Celcius: \n");
	scanf("%f", &celcius_valor);
	
	printf("fahrenheit: %.1f\n", fahrenheit(celcius_valor));
	printf("kelvin: %.1f \n", kelvin(celcius_valor));
	
	printf("===PROGRAMA TERMINADO===\n");
	
	return 0;
}