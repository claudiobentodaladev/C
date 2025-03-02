#include <stdio.h>

int main(){
	int alunos = 1, trimestres = 3 ;
	float media,nota[alunos][trimestres] ;
	
	printf("Quantos alunos queres cadastrar:\n") ;
	scanf("%d", &alunos) ;
	
	for(int lin = 0; lin < alunos; lin++){
		printf("=====Aluno nº %d =====\n",lin);
		for(int col = 0; col < 3;col++){
			printf("Nota %d \n",col);
		}
	}
	return 0;
	
}