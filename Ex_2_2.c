#include <stdio.h>

int main(){
	
	int idade = 0;
	int ano = 1950;
	float peso = 0.0;
		
    printf("Valor inicial da idade: %d.\n", idade);
    
    printf("Digite uma idade e ano:\n");
    scanf("%d %d", &idade, &ano);
    
    printf("Digite um peso:\n");
    scanf("%f", &peso);
    
    printf("Idade informada: %d.\n", idade);
    printf("Ano informado: %d.\n", ano);
    printf("Peso informado: %f.\n", peso);
    
}  
