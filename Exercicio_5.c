#include <stdio.h>
#include <stdlib.h>


float soma(float n1, float n2);//declaracao da funcao soma
float sub(float n1, float n2);//declaracao da funcao subtracao
float divisao(float n1, float n2);//declaracao da funcao divisao
float mult(float n1, float n2);//declaracao da funcao multiplicacao
char le_valida_operador(); //declaracao da funcao le_valida
char menu();//declaracao da funcao menu

	int main() {

 	char continuar;//declaracao da variavel continuar. Ela vai decidir se o usuario quer sair ou nao do programa
 		
	do{//do while para continuar ou nao na calculadora
	
	menu();//vai executar a funcao menu
	
	printf("\nDeseja continuar?(S|N)");
	scanf(" %c", &continuar);//salvar se o usuario quer ou nao continuar na calculadora
	
	system("cls");//limpar a poluicao da tela
	
	}while(continuar=='s' || continuar=='S');//fim do do while
	
	printf("Ate mais!");
	
}	

float soma(float n1, float n2){//funcao soma
	float resultado;
	return n1 + n2;//retorno da funcao soma
}

float sub(float n1, float n2){//funcao sub
	float resultado;
	return n1 - n2;//retorno da funcao subtracao
}

float divisao(float n1, float n2){//funcao divisao
	float resultado;
	return n1 / n2;//retorno da funcao divisao
}

float mult(float n1, float n2){//funcao multiplicao
	float resultado;
	return n1 * n2;//retorno da funcao multiplicao
}

char le_valida_operador(){//funcao le_valida
	char operador;//declaracao da variavel operador
	int i=0;//declaracao da variavel i, que vai fazer imprimir o erro, caso o valor dela seja maior que 0
	do{//comeco do do while
		if(i!=0){//if para caso o i for diferente de 0, de erro
			printf("-------\nERRO\n-------\n");
		}
		scanf(" %c",&operador);	//salvando o valor de operador
		i++;//aumentar em 1 o valor de i para cada vez que o do while for feito
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	//fim do do while
 
	return operador;//retornar o operador
}

char menu(){//funcao menu
	char conti;	//declaracao da variavel conti
	float n1,n2,result;//declaracao das variaveis n1, n2 e result
	char ope, continuar;//declaracao das variaveis ope e continuar

	printf("--------------------CALC--------------------");
 
	printf("\nN1: ");
	scanf("%f",&n1);//salvando o n1
 
	printf("Informe e operador:");
	ope = le_valida_operador();//a variavel ope vai entrar em le_valida_operador e retornar o valor de operador
 
	printf("N2: ");
	scanf("%f",&n2);//salvando o n2
 
	printf("---------------\n");
 
	if (ope=='+'){//if caso o operador seja +
		result=soma(n1,n2);
		printf("RESULTADO: %.2f", result);//printar o resultado caso seja soma
	}
	else if (ope=='-'){//else if caso o operador seja -
		result=sub(n1,n2);
		printf("RESULTADO: %.2f", result);//printar o resultado caso seja subtracao
	}
	else if (ope=='*'){//else if caso o operador seja *
		result=mult(n1,n2);
		printf("RESULTADO: %.2f", result);//printar o resultado caso seja multiplicacao
	}
	else if (ope=='/'){//else if caso o operador seja /
		if (n2==0){//if para nao dividir por 0
		printf("Nao e possivel dividir por 0\n");	//printar que e impossivel dividir por 0
		}
		else {
		result=divisao(n1,n2);
		printf("RESULTADO: %.2f", result);//printar o resultado caso seja divisao
		}
	}

	return 0;
}	
