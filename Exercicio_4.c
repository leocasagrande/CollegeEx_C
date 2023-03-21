#include <stdio.h>
#include <string.h>

int main(){
	char nome[50];//declaracao do vetor nome
    int tamanho = 0, i = 0, ultimo_espaco = 0;//declarar tamanho, i para a repeticao e o ultimo espaco
    printf("Informe seu nome completo: ");
    scanf("%[^\n]s", &nome);//salvar o nome completo
    
    tamanho = strlen(nome);//tamanho recebe o tamanho do nome digitado

    for (i = 0; i<tamanho; i++){//for para descobrir qual e o ultimo espaco
        if (nome[i] == ' '){
            ultimo_espaco = i;
        }
    }

    for (i = ultimo_espaco+1; i<tamanho; i++){//for para printar o ultimo nome em maiusculo(toupper)
        printf("%c", toupper(nome[i]));
    }
    nome[0]=toupper(nome[0]);
    printf(", %c. ", nome[0]);//printar a primeira letra em maiusculo(toupper)

    for (i = 0; i<ultimo_espaco; i++){//for para, todo espaco que o nome tiver, ele printar a letra depois do espaco(i+1) em maiusculo(toupper);
        if (nome[i] == ' '){
            printf("%c. ", toupper(nome[i+1]));
        }
    };

        
	return 0;
}
