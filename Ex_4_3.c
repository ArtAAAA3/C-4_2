#include <stdio.h>

int main(){
	
	int d;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("Domingo.\n"); //1
			break;
		case 2:
			printf("Segunda-Feira.\n");//2
			break;
		case 3:
			printf("Terça-Feira.\n");//3
			break;
		case 4:
			printf("Quarta-Feira.\n");//4
			break;
		case 5:
			printf("Quinta-Feira.\n");//5
			break;
		case 6:
			printf("Sexta-Feira.\n");//6
			break;
		case 7:
			printf("Sábado.\n");//7
			break;
		default:
			printf("Burro do caramba, não pode 8.\n");//(N<1);(N>7)
			break;
	}
}

