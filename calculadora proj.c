#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	float a, b;
		
	printf("Digite 1 para SOMAR.\n");
	printf("Digite 2 para SUBTRAIR.\n");
	printf("Digite 3 para MULTIPLICAR.\n");
	printf("Digite 4 para DIVISAO.\n");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &a);
			printf("Digite o segundo valor:\n");
			scanf("%f", &b);
			
			printf("O resultado desta soma e:\n%f\n", a + b);	
			break;
			
		case 2:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &a);
			printf("Digite o segundo valor:\n");
			scanf("%f", &b);
			
			printf("O resultado desta subtracao e: \n%f\n", a - b);			
			break;
		
		case 3:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &a);
			printf("Digite o segundo valor:\n");
			scanf("%f", &b);
			
			printf("O resultado desta multiplicacao e: \n%f\n", a * b);
			break;
		
		case 4:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &a);
			printf("Digite o segundo valor:\n");
			scanf("%f", &b);
			
			printf("O resultado desta divisao e: \n%f\n", a / b);
			break;
				
		default:
			printf("Comando invalido!\n");
			break;
	}
	system("pause");
}
