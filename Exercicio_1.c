#include <stdio.h>
#include <stdlib.h>

int main(){//comeco do codigo
    int idade;//declaracao da variavel idade
    
    printf("Informe sua Idade: ");//imprimir o pedido da idade
    scanf("%d", &idade);//salvando o valor de idade
    
    if(idade < 0) {//if para caso a idade corresponda a alguem que ainda não nasceu
        printf("Nao nasceu.\n");
    } else {
        if(idade < 18){//caso a pessoa tenha menos de 18 anos, esse if sera executado
            if (idade < 16){//caso a pessoa tenha menos de 16 anos, ela nao vota
                printf("Nao vota.\n");
            } else {
                printf("Voto opcional.\n");//caso tenha mais, ela vota de forma opcional
            }
        } else {
            if (idade < 65){//caso a idade seja menor que 65, esse if sera executado
                if (idade != 41){//caso a idade for diferente de 41, o voto e obrigatorio
                    printf("Voto obrigatorio.\n");
                } else {
                    printf("Ganha premio 1!\n");//caso for 41, ela ganha o premio 1
                }
            } else {
                if (idade != 82){//caso a idade seja diferente de 82, mas maior que 65, voto opcional
                    printf("Voto opcional.\n");
                } else {//caso tenha 82, a pessoa ganha o premio 2
                    printf("Ganha premio 2!\n");
                }
            }
        }
    }
    return 0;//fim do codigo
}
